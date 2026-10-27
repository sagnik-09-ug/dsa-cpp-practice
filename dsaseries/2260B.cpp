#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x, y, k;
        cin >> x >> y >> k;

        long long d = y - x;
        long long sum = 0;
        long long i = 0;

        while (i < k && x + i <= d) {      // months where the remainder needs computing
            sum += d % (x + i);
            i++;
        }
        sum += (k - i) * d;                // all remaining months give exactly d

        cout << sum << "\n";
    }
    return 0;
}