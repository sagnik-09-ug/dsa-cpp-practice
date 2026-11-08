#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;
int majorityelement(vector<int> a){
    int f=1;
    for(int i=1;i<a.size();i++){
        if(a[i]==a[i-1])f++;
        else f=1;
        if(f>(a.size()/2)){
            return arr[i];
            break ;
        }
    }
    return -1;
}
int main ()
{
    vector<int> a={1,1,2,2,1};
    sort(a.begin(),a.end());
    cout<<majorityelement(a);
    return 0 ;
}