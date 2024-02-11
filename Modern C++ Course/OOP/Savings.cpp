#include <string>
#include "Savings.h"
using namespace std;

Savings::Savings(const string &name, float balance, float interest_rate)
: Account(name, balance), m_Interest_Rate(interest_rate) {}

Savings::~Savings() {}

float Savings::GetInterestRate() const {
    return m_Interest_Rate;
}

void Savings::AccumulateInterest() {
    m_Balance += (m_Balance * m_Interest_Rate);
}