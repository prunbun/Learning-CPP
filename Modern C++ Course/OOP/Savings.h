#include <string> 
#include "Account.h"
using namespace std;

class Savings: public Account {
    private:
        float m_Interest_Rate;

    public:
        Savings(const string &name, float balance, float interest_rate);
        ~Savings();

        // these are new to the savings class
        float GetInterestRate()const;
        void AccumulateInterest();
};