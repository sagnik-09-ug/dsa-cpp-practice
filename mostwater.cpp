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
    int h,w,ar,ans=0;
    for(int i=0;i<a.size();i++){
        for(int j=i+1;j<a.size();j++){
            h=min(a[i],a[j]);
            w=j-i;
            ar=h*w;
            ans=max(ar,ans);
        }
    }
    cout<<ans;
    return 0 ;
}