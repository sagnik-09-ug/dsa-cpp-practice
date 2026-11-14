#include <iostream>
using namespace std ;
int majorityelement(vector<int>& nums){
    int freq=0,ans=0;
    for(int i =0;i< nums.size();i++){
        if(freq==0) ans =nums[i];
        if(ans==nums[i] ) freq++;
        else freq--;
    } return ans;
}
int main ()
{
    vector<int> a={1,1,2,2,1};
    cout<<majorityelement(a);
    return 0 ;
}