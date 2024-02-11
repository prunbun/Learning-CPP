#include <iostream>
#include "Account.h"
using namespace std;

int main() {
    Account my_account("Flynn Rider's Account", 1000000); // Note, this is a local variable, not on heap
    cout << "hi Flynn Rider!" << endl; 
    return 0;
}
