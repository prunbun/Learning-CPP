#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void catOps() {
    int num_boxes;
    string cats, answer;

    cin >> num_boxes;
    cin >> cats >> answer;

    // go through each string, count how many are different on top and bottom
    // answer to find replacements is find the min between the top and bottom, and add the difference
    // since cat transfer can do a 'delete' and an 'add' in one

    int top = 0;
    int bot = 0;

    for (int i = 0; i < num_boxes; i++) {
        if (cats[i] != answer[i]) {
            if (cats[i] == '1') {
                top++;
            } else {
                bot++;
            }
        }
    }

    int ops = min(top, bot) + abs(top - bot);

    cout << ops << endl;
    return;
}

int main() {
    int tc;
    cin >> tc;

    while(tc--) {
        catOps();
    }

    return 0;
}