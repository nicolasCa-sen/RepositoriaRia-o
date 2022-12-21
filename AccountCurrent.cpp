//
// Created by Jairo Riaño on 14/12/22.
//

#include "AccountCurrent.h"

AccountCurrent::AccountCurrent() {}

AccountCurrent::AccountCurrent(const std::string &customer, double residue, const std::string &isn) : Account(customer,
                                                                                                              residue),
                                                                                                      isn(isn) {}

const std::string &AccountCurrent::getIsn() const {
    return isn;
}

void AccountCurrent::setIsn(const std::string &isn) {
    AccountCurrent::isn = isn;
}

bool AccountCurrent::withDraw(double value) {

    if( value <= ( residue + Account::minResidue)){
        setResidue( residue - value );

        return true;
    }

    return false;
}

AccountCurrent::~AccountCurrent() {

}

std::ostream &operator<<(std::ostream &os, const AccountCurrent &current) {
    os << static_cast<const Account &>(current) << " isn: " << current.isn;
    return os;
}
