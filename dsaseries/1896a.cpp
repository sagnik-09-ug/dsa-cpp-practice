 #include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int first;
        cin >> first;
        for (int i = 1; i < n; i++) {
            int x;
            cin >> x;          // read the rest so the next test case starts correctly
        }
        if (first == 1) cout << "YES\n";
        else            cout << "NO\n";
    }
    return 0;
}