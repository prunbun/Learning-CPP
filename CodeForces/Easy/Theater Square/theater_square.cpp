#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, m, a;
    cin >> n >> m >> a;

    long long tiles_needed = ceil((double) n / a) * ceil((double) m / a);
    // ((n / a) + (n % a > 0)) * ((m / a) + (m % a > 0));

    cout << tiles_needed << endl;

    return 0;
}
