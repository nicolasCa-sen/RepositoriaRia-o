//
// Created by Jairo Riaño on 14/12/22.
//

#ifndef POOACCOUNTS_ACCOUNTCURRENT_H
#define POOACCOUNTS_ACCOUNTCURRENT_H

#include <ostream>
#include "Account.h"

class AccountCurrent :public Account {
public:

private:
    std::string isn;

public:
    AccountCurrent();

    AccountCurrent(const std::string &customer, double residue, const std::string &isn);

    const std::string &getIsn() const;

    void setIsn(const std::string &isn);

    bool withDraw(double d) override;

    friend std::ostream &operator<<(std::ostream &os, const AccountCurrent &current);

    ~AccountCurrent() override;
};


#endif //POOACCOUNTS_ACCOUNTCURRENT_H
