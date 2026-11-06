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
    int n;cin>>n;
    while(n--){
    string s; cin>>s;
    int l=s.length();
    if(l<=10){
        cout<<s<<"\n";
    }
    else{
        cout<<s[0]<<(l-2)<<s[l-1]<<"\n";
    }
    }
}