#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        string s;
        cin >> n >> k >> s;

        map<char, int> freq;
        for (char c : s) freq[c]++;       // count each letter

        int odd = 0;
        for (auto p : freq) {
            if (p.second % 2 == 1) odd++; // letters with an odd count
        }

        if (odd - 1 <= k) cout << "YES\n";
        else              cout << "NO\n";
    }
    return 0;
}