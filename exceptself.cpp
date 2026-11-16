#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 3, 4};
    vector<int> ans;

    for (int i = 0; i < nums.size(); i++) {
        int p = 1;
        for (int j = 0; j < nums.size(); j++) {
            if (i == j) continue;
            p *= nums[j];
        }
        ans.push_back(p);
    }

    for (int x : ans) cout << x << " ";  // 24 12 8 6
    return 0;
}