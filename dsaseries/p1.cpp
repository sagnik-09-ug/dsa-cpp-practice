
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

using namespace std;
//sagnik 26CS10131
using namespace std ;
int main ()
{
    int t; cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum =1,node=1;
        for(int i=2;i<=n;i++){
        node=node*i;
        sum=sum+node;
        }
        cout<<sum<<"\n";
    }
    return 0 ;
}