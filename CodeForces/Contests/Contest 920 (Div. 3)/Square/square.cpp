#include <iostream>
#include <cmath>
using namespace std;

void findArea() {
    int x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

    int area = pow(max(abs(x1 - x2), abs(y1 - y2)), 2);

    cout << area << endl;
}

int main() {
    int tc;
    cin >> tc;

    while(tc--) {
        findArea();
    }

    return 0;
}