#include <string>
#include "Account.h"
using namespace std;

// This style depends on a header file, so we can use OOP principle of Abstraction
// Note that if you were to do decl + def, then you have to include it in the main
// esp. if you have static variables

int Account::s_Account_Number_Generator = 1000;

Account::Account(const string &name, float balance)
: m_Name(name), m_Balance(balance) {
    m_Account_Number = ++s_Account_Number_Generator;
}
Account::~Account() {

}

const string Account::GetName() const {
    return m_Name;
}

float Account::GetBalance() const {
    return m_Balance;
}

int Account::GetAccountNumber() const {
    return m_Account_Number;
}


