#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <map>
#include <set>
#include <string>
using namespace std ;
int main ()
{
    int t; cin>>t;
    while(t--){
        int n,k,res;
        cin>>n>>k;
        vector<int> a(n);
        for(int &i:a) cin>>i;
        res=count(a.begin(),a.end(),k);
        if(res>=1) cout<<"YES\n";
        else cout<<"NO\n";
        }
    }
    