#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <stack>
#include <queue>
#include <utility>
#include <numeric>
#include <iomanip>
#include <cstring>
#include <sstream>
#include <deque>
#include <list>
using namespace std ;
int main ()
{
    vector<int> a{1,8,6,2,5,4,8,3,7};
    int i=0,j=(a.size()-1),ans=0,ar=1,w,h;
    while(i<j){
        w=j-i;
        h=min(a[i],a[j]);
        ar=h*w;
        ans=max(ans,ar);
        a[i]<a[j] ? i++ : j-- ;
    }
    cout<<ans;
    return 0 ;
}