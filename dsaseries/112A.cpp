#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    for (char &ch : s1) ch = tolower(ch);
    for (char &ch : s2) ch = tolower(ch);

    if (s1 == s2) cout << 0 << endl;
    else if (s1 < s2) cout << -1 << endl;
    else cout << 1 << endl;

    return 0;
}