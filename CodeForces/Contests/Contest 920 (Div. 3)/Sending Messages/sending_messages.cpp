#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

void batteryTest() {
    // read in input
    int num_messages, battery, unit_cost, onoff_cost;
    cin >> num_messages >> battery >> unit_cost >> onoff_cost;

    vector<int> moments;
    for (int i = 0; i < num_messages; i++) {
        int moment;
        cin >> moment;
        moments.push_back(moment);
    }

    // loop over the messages and 'simulate' the process
    int last_moment = 0;
    for (int moment: moments) {
        int sustain = (moment - last_moment) * unit_cost;

        // is it better to turn the phone off or wait it out?
        if (sustain < 0 || sustain > onoff_cost) {
            battery -= onoff_cost;
        } else {
            battery -= sustain;
        }

        last_moment = moment;
        if (battery <= 0) {
            cout << "NO" << endl;
            return;
        }
    }

    if (battery <= 0) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }


    return;
}

// debugging code
// cout << "USED BATTERY" << endl;
// debugging
// cout << "LAST MOMENT: " << last_moment << " MOMENT: " << moment << " SUSTAIN: " << sustain << " BATTERY: " << battery << endl;

int main() {
    int tc;
    cin >> tc;

    while(tc--) {
        batteryTest();
    }

    return 0;
}