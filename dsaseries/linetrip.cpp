#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <map>
#include <set>
#include <string>
using namespace std;

int main(){
    int t;
    cin>> t;
    for(int i=t;i>0;i--){
        int n,x;
        cin>>n>>x;
        vector<int> a(n);
        for(auto &v :a) cin>>v;
        int ans= a[0];
        for(int i=1;i<n;i++){
            ans=max(ans,a[i]-a[i-1]);
            ans=max(ans,2*(x-a[n-1]));

        cout<<ans<<"\n";
    }
}
}