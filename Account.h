//
// Created by Jairo Riaño on 14/12/22.
//

#ifndef POOACCOUNTS_ACCOUNT_H
#define POOACCOUNTS_ACCOUNT_H

#include <string>
#include <ostream>

class Account {

public:
    static double minResidue;

    Account();

    Account(const std::string &customer, double residue);

    const std::string &getCustomer() const;

    void setCustomer(const std::string &customer);

    double getResidue() const;

    void setResidue(double residue);

    friend std::ostream &operator<<(std::ostream &os, const Account &account);

    double consign(double);

    virtual bool withDraw(double)=0;

    virtual ~Account();

protected:
    std::string customer;
    double residue;

};


#endif //POOACCOUNTS_ACCOUNT_H
