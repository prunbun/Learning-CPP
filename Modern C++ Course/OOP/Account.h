#include <string> 
using namespace std;

class Account {
    private:
        string m_Name;
        int m_Account_Number;
        static int s_Account_Number_Generator;

    protected:
        float m_Balance;

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

        // Note that child classes will implement this 
        float GetInterestRate()const; 
        
};