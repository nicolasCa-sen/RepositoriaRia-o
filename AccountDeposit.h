//
// Created by Jairo Riaño on 14/12/22.
//

#ifndef POOACCOUNTS_ACCOUNTDEPOSIT_H
#define POOACCOUNTS_ACCOUNTDEPOSIT_H


#include <ostream>
#include "Account.h"

class AccountDeposit: public Account {
public:

    AccountDeposit();

    AccountDeposit(const std::string &customer, double residue, double rate);

    double getRate() const;

    void setRate(double rate);

    bool withDraw(double d) override;

    friend std::ostream &operator<<(std::ostream &os, const AccountDeposit &deposit);

    ~AccountDeposit() override;


private:
    double rate;
};


#endif //POOACCOUNTS_ACCOUNTDEPOSIT_H
