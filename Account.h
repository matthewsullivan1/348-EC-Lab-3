//Base Account Class
/*
accountNum
accountHolder
balance
displayDetails(): Display account details.
deposit(amount): Deposit money into the account.
withdraw(amount): Withdraw money from the account (ensure sufficient balance).
*/

#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <string>

class Account {
protected:
    string account_num;
    string account_holder;
    double balance;

public:
    Account(const std::string& num, const std::string& account_holder, double initial_balance);

    void displayDetails() const;

    void deposit(double amount);

    virtual bool withdraw(double amount);

    virtual void displayAdditionalDetails() const = 0;

    virtual std::string getAccountType() const = 0;

    friend std::ostream& operator<<(std::ostream& os, const Account& account);
};

#endif //ACCOUNT_H



