#include <iostream>
#include <cmath>
#include <climits>
#include <set>

using namespace std;

int main() {

    int cases;
    cin >> cases;

    for (int i = 0; i < cases; i++) {

        // vars needed for the iter
        int max_bot = 1; // lower bound
        int min_top = INT_MAX; // upper bound
        set<int> equals; // all seen equal-to numbers
        int amount = 0; // res


        // all the rules we need to process
        int constraints;
        cin >> constraints;
        int rule; // rule number
        int bound; // associated bound

        // process all the rules
        for (int j = 0; j < constraints; j++) {
            cin >> rule;
            cin >> bound;

            switch(rule) {
                case 1:
                    max_bot = max(max_bot, bound);
                    break;
                case 2:
                    min_top = min(min_top, bound);
                    break;
                case 3:
                    equals.insert(bound);
            }
        }

        // check edge case
        if (max_bot > min_top) {
            cout << 0 << endl;
            continue;
        }

        // calculate the amount
        amount = min_top - max_bot + 1;
        for (int equal: equals) {
            if (max_bot <= equal && equal <= min_top) {
                amount -= 1;
            }
        }

        cout << amount << endl;
    }

    return 0;
}