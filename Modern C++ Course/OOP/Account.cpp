#include <iostream>
#include <string>
#include "Account.h"
using namespace std; 

// This style depends on a header file, so we can use OOP principle of Abstraction
// Note that if you were to do decl + def, then you have to include it in the main
// esp. if you have static variables

int Account::s_Account_Number_Generator = 1000;

// Constructors and Destructors
Account::Account(const string &name, float balance)
: m_Name(name), m_Balance(balance) {
    m_Account_Number = ++s_Account_Number_Generator;
}
Account::~Account() {}


// These functions are getters that don't modify the state once created
const string Account::GetName() const {
    return m_Name;
}

float Account::GetBalance() const {
    return m_Balance;
}

int Account::GetAccountNumber() const {
    return m_Account_Number;
}


// These functions do modify the state
void Account::AccumulateInterest() {}

void Account::Withdraw(float amount) {
    if (amount <= m_Balance) {
        m_Balance -= amount;
    } else {
        cout << "Not enough funds to withdraw " << amount << " :(" << endl; 
    }
}

void Account::Deposit(float amount) {
    m_Balance += amount;
}

// Note that child classes will implement this 
float Account::GetInterestRate() const {
    return 0.0f;
}


