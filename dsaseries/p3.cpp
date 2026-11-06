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
        int a,b,k,c=0;
        cin>>a>>b>>k;
        if(a==b)cout<<"-1\n";
        else{
            for(int i=2;(i<(INT_MAX));i++){
                if(i%a==0&&i%b==0) continue;
                else {
                c++;}
                if(c==k) {
                cout<<i<<"\n";
                break;
            }
            }
        }
    }
    return 0 ;
}