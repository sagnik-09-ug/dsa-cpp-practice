#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cstdlib>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int &i : A) cin >> i;

    bool hasZero = false;
    int M = INT_MAX;
    for (int i : A) {
        if (i == 0) hasZero = true;
        M = min(M, abs(i));
    }

    if (hasZero) cout << 0 << "\n";
    else         cout << M << "\n";
    return 0;
}