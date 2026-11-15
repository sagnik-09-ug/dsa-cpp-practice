#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v{2, -5, 4, 3, -1, 6, -10, 5};
    int cs=0,ms=INT_MIN;

    for (size_t i = 0; i < v.size(); i++) {
        cs +=v[i];
        ms= max(ms,cs);
        if(cs<0) cs=0;
    }

    cout << ms;  // 12
    return 0;
}