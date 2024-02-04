#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // take in the number of cases and run this for all of them
    int num_cases = 0;
    cin >> num_cases;

    for (int i = 0; i < num_cases; i++) {
        // for each test case process each of the wallet amounts
        int a = 0;
        int b = 0;
        int temp = 0;

        cin >> a;
        cin >> b;

        // THE EASY ONE
        // // even number means alice's turn
        // int round = 0;

        // while (a > 0 && b > 0) {

        //     if (round % 2 == 0) { // alice's turn
        //         // step 1
        //         if (b > a) {
        //             temp = a;
        //             a = b;
        //             b = temp;
        //         }

        //         // step 2
        //         a--;

        //     } 
        //     else { // bob's turn
        //         // step 1
        //         if (a > b) {
        //             temp = b;
        //             b = a;
        //             a = temp;
        //         }

        //         // step 2
        //         b--;
        //     }

        //     round++;
        // }

        // // now the game is over, so let's see who won
        // if (a == 0) {
        //     // bob won
        //     cout << "Bob";
        // } else {
        //     cout << "Alice";
        // }

        // THE COOL ONE
        int difference = abs(a - b);
        if (difference % 2 == 0) {
            cout << "Bob" << endl;
        } else {
            cout << "Alice" << endl;
        }
    }

    return 0;
}