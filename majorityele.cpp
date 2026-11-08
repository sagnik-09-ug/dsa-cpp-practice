#include <iostream>
using namespace std ;
int majorityelement(vector<int> a){
    for(int i: a){
        int c=0;
        for(int j: a){
            if(i==j)c++;
        }
        if(c>(a.size()/2)) {
        return i;
        break;}
    }
     return -1;
}
int main ()
{
    vector<int> a={1,1,2,2,1};
    cout<<majorityelement(a);
    return 0 ;
}