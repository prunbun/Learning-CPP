#include <string> 
using namespace std;

class Account {
    private:
        string m_Name;
        float m_Balance;
        int m_Account_Number;
        static int s_Account_Number_Generator;

    public:
        // Constructors and Destructors
        Account(const string &name, float balance);
        ~Account();

        // These functions are getters that don't modify the state once created
        const string GetName()const;
        float GetBalance()const;
        int GetAccountNumber()const;

        // These functions do modify the state
        void AccumulateInterest();
        void Withdraw(float amount);
        void Deposit(float amount);

        // An account doesn't directly have an interest rate 
        float GetInterestRate()const; 
        
};