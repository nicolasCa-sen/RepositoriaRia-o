//
// Created by Jairo Riaño on 14/12/22.
//

#include "AccountDeposit.h"


AccountDeposit::AccountDeposit() {}

AccountDeposit::AccountDeposit(const std::string &customer, double residue, double rate) : Account(customer, residue),
                                                                                           rate(rate) {}

double AccountDeposit::getRate() const {
    return rate;
}

void AccountDeposit::setRate(double rate) {
    AccountDeposit::rate = rate;
}

bool AccountDeposit::withDraw(double value) {
    if( value <= (residue - AccountDeposit::minResidue)){
        setResidue( residue - value );

        return true;
    }

    return false;
}

AccountDeposit::~AccountDeposit() {

}

std::ostream &operator<<(std::ostream &os, const AccountDeposit &deposit) {
    os << static_cast<const Account &>(deposit) << " rate: " << deposit.rate;
    return os;
}

