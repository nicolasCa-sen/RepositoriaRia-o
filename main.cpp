#include <iostream>
#include "ServiceAccounts.h"
#include "TypeAccount.h"

using namespace std;

int main() {

    ServiceAccounts *sa = new ServiceAccounts();

    cout<<sa->addAccount("Lola Maria",100000,0.03,"",TypeAccount::DEPOSIT)<<endl;
    cout<<sa->addAccount("Pedro Miguel",1000000,0.03,"234234",TypeAccount::CURRENT)<<endl;
    cout<<sa->addAccount("Josefa",450000,0.03,"",TypeAccount::DEPOSIT)<<endl;
    cout<<sa->addAccount("Josefa",450000,0.03,"",TypeAccount::DEPOSIT)<<endl;
    sa->deposit("Josefa",50000);

    if( sa->findAccount("Josefa") != NULL){
        cout<<"Existe"<<endl;
    }else{
        cout<<"No Existe"<<endl;
    }

    std::vector<Account*> accs = sa->getAccounts();
    for( int i = 0 ; i < accs.size() ; i++ ){
        cout<<*accs[i]<<endl;
    }

    delete(sa);

    return 0;
}
