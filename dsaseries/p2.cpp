#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        for (auto &i : a) cin >> i;

        int mn = *min_element(a.begin(), a.end());
        bool ok = true;
        for (int x : a) {
            if (x % mn != 0) { ok = false; break; }
            int q = x / mn;
            while (q % 2 == 0) q /= 2;
            if (q != 1) { ok = false; break; }   // leftover odd factor > 1
        }
        cout << (ok ? "YES" : "NO") << "\n";
    }
    return 0;
}