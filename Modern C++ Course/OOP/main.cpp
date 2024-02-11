#include <iostream>
#include "Savings.h"
using namespace std;

int main() {
    Savings new_account("Flynn Rider's Account", 100, 0.01); // Note, this is a local variable, not on heap
    cout << "hi Flynn Rider!" << endl; 

    cout << "Your new account has balance: " << new_account.GetBalance() << "!" << endl;
    
    new_account.Deposit(200);
    cout << "Your deposit has completed! Your account now has balance: " << new_account.GetBalance() << "!" << endl;

    new_account.AccumulateInterest();
    cout << "After interest, your new account has balance: " << new_account.GetBalance() << "!" << endl;

    return 0;
}
