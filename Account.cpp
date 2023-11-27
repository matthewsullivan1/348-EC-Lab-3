#include "Account.h"
#include <iostream>

Account::Account(const std::string& num, const std::string& holder, double initial_balance)
    : account_num(num), account_holder(holder), balance(initial_balance) {}

void Account::displayDetails() const {
    std::cout << "Account Number: " << account_num << std::endl;
    std::cout << "Account Holder: " << account_holder << std::endl;
    std::cout << "Account Balance: $" << balance << std::endl;
    displayAdditionalDetails();
}

void Account::deposit(double amount) {
    balance += amount;
    std::cout << "Deposited :$" << amount << ". New balance: $" << balance << std::endl;
}

bool Account::withdraw(double amount) {
    if (amount <= balance) {
        balance -= amount;
        std::cout << "Withdrew :$" << amount << ". New balance: $" << balance << std::endl;
        return true;
    } else {
        std::cout << "withdrawal failed" << std::endl;
        return false;
    }
}

void Account::displayAdditionalDetails() const {
    // Implement additional details specific to the account if any.
}

std::string Account::getAccountType() const {
    return "Account";
}

std::ostream& operator<<(std::ostream& os, const Account& account) {
    os << "Account Number: " << account.account_num << std::endl;
    os << "Account Holder: " << account.account_holder << std::endl;
    os << "Account Balance: $" << account.balance << std::endl;

    account.displayAdditionalDetails();
    return os;
}
