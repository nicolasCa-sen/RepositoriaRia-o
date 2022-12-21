//
// Created by Jairo Riaño on 19/12/22.
//

#ifndef POOACCOUNTS_SERVICEACCOUNTS_H
#define POOACCOUNTS_SERVICEACCOUNTS_H

#include <vector>
#include "Account.h"
#include "AccountDeposit.h"
#include "AccountCurrent.h"
#include "TypeAccount.h"

class ServiceAccounts {
public:
    ServiceAccounts();
    Account* findAccount( std::string );
    bool deposit(std::string, double);
    bool addAccount(std::string, double, double, std::string, TypeAccount );
    std::vector<Account*> getAccounts();

    virtual ~ServiceAccounts();

private:
    std::vector<Account*> accounts;
};


#endif //POOACCOUNTS_SERVICEACCOUNTS_H
