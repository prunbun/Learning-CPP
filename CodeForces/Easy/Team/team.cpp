#include <iostream>
using namespace std;

bool will_solve() {
    int a, b, c;

    cin >> a >> b >> c;

    return (a & b) | (b & c) | (a & c);
}

int main() {
    int total_num_problems;
    cin >> total_num_problems;

    int solutions_written = 0;

    while (total_num_problems--) {
        if (will_solve()) {
            solutions_written++;
        }
    }

    cout << solutions_written << endl;

    return 0;
}