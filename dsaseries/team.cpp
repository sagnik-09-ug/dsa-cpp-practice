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
    int n,c1=0; cin>>n;
    while(n--){
    vector<int> a(3);
    for(int &i:a) cin>>i;
    int c2=0;
    for(int i:a){
        if(i==1) c2++;
    }
    if(c2>=2) c1++;
    }
    cout<<c1;
    return 0 ;
}