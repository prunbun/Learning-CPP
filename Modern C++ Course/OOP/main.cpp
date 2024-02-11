#include <iostream>
#include "Account.h"
using namespace std;

int main() {
    Account new_account("Flynn Rider's Account", 100); // Note, this is a local variable, not on heap
    cout << "hi Flynn Rider!" << endl; 

    cout << "Your new account has balance: " << new_account.GetBalance() << "!" << endl;
    
    new_account.Deposit(200);
    cout << "Your deposit has completed! Your account now has balance: " << new_account.GetBalance() << "!" << endl;

    new_account.Withdraw(500);

    return 0;
}
