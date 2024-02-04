#include <iostream>
#include <cmath>

using namespace std;

void printVector(vector<int> to_be_printed);

void scopeTesting(vector<int> &param) {
    // param = 42;
    // cout << "from func: " << param << endl;
    // for (int i = 0; i < param.size(); i++) {
    //     param[i]++;
    // }

    for (auto &i : param) {
        i += rand() % 6;
    }
    printVector(param);
    return;
}

void printVector(vector<int> to_be_printed) {
    // int length = to_be_printed.size();
    // for (int i = 0; i < length; i++) {
    //     cout << to_be_printed[i] << " ";
    // }

    for (int num : to_be_printed) {
        cout << num << " ";
    }

    cout << endl;
}

int main() {
    // vector<int> a(4, 0);
    // cout << "before func: " << endl;
    // printVector(a);
    // scopeTesting(a);

    // cout << "after func: " << endl;
    // printVector(a);
    int total = 0;
    for (int i = 0; i < 10; ++i) {
        cout << i << endl;
        total = total + i;
    }
    cout << "total: " << total << endl;
    return 0;
}

