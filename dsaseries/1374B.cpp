#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int a = 0, b = 0;
        while (n % 2 == 0) { n /= 2; a++; }   // count and remove the 2s
        while (n % 3 == 0) { n /= 3; b++; }   // count and remove the 3s

        if (n != 1 || a > b) cout << -1 << "\n";
        else                 cout << 2 * b - a << "\n";
    }
    return 0;
}