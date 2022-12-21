//
// Created by Jairo Riaño on 14/12/22.
//

#include "Account.h"

double Account::minResidue = 50000;

Account::Account() {}

Account::Account(const std::string &customer, double residue) : customer(customer), residue(residue) {}

const std::string &Account::getCustomer() const {
    return customer;
}

void Account::setCustomer(const std::string &customer) {
    Account::customer = customer;
}

double Account::getResidue() const {
    return residue;
}

void Account::setResidue(double residue) {
    Account::residue = residue;
}

std::ostream &operator<<(std::ostream &os, const Account &account) {
    os << "customer: " << account.customer << " residue: " << account.residue;
    return os;
}

Account::~Account() {

}

double Account::consign(double value) {
    Account::residue += value;

    return residue;
}
