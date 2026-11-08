#include <iostream>
#include <vector>
using namespace std ; 
vector<int> pairsum(vector<int> nums , int target){
    vector<int>ans;
    int n=nums.size();
    int i=0,j=n-1;
    while (i<j)
    {
        int ps = nums[i]+nums[j];
        if (ps>target) j--;
        else if (ps<target)i++;
        else {
            ans.push_back(i);
            ans.push_back(j);
                return ans;
        }
        
    }
    
    return ans;
}
int main ()
{
    vector<int> nums ={2,7,11,15};
    int target=9;
    vector<int> ans = pairsum(nums,target);
    if (ans.empty()) cout << "No pair found";
    else cout << ans[0] << "," << ans[1];
    return 0 ;
}