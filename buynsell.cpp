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
    vector<int> prices = {7,6,4,3,1};
    int m=INT_MIN;
    int diff;
    for(int i=0;i<prices.size();i++){
        for(int j=i+1;j<prices.size();j++){
            diff= prices.at(j)-prices.at(i);
            m= max(diff,m);
        }
    }
    if(m>0) cout<<m;
    else cout<<0;
    return 0 ;
}