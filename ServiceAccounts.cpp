//
// Created by Jairo Riaño on 19/12/22.
//

#include "ServiceAccounts.h"

ServiceAccounts::ServiceAccounts() {}

Account *ServiceAccounts::findAccount(std::string name) {

    for( int i = 0 ; i < accounts.size() ; i++  ){
        if( accounts.at( i )->getCustomer().compare(name) == 0 ){

            return accounts.at(i);
        }
    }

    return NULL;
}

bool ServiceAccounts::deposit(std::string customer, double value) {
    Account *account = findAccount( customer );
    if( account != NULL ){
        account->consign( value );

        return true;
    }

    return false;
}

bool ServiceAccounts::addAccount(std::string customer, double residue, double rate, std::string isn, TypeAccount typeAccount) {

    if(findAccount( customer ) == NULL ){
        if( typeAccount == TypeAccount::DEPOSIT){
            accounts.push_back( new AccountDeposit( customer, residue, rate ));
        }else{
            accounts.push_back( new AccountCurrent( customer, residue, isn ));
        }

        return true;
    }

    return false;

}

std::vector<Account*> ServiceAccounts::getAccounts(){
    return accounts;
}

ServiceAccounts::~ServiceAccounts() {

}

