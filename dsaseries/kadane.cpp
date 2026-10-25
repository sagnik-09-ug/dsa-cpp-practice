#include <iostream>
#include <vector>
using namespace std ;
int main ()
{
   
    vector<int> v{2, -5, 4, 3, -1, 6, -10, 5};  int current = v.at(0) , best = v.at(0);
    for(int i: v){
        current=max(i,current + i);
        best=max(best,current);
    }
    cout<<best;
    return 0 ;
}