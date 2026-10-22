#include <iostream>
#include <vector>
using namespace std ;
int main ()
{
    vector<int> v{1,2,3,4,5,6};
    int target = 6;
    for(int i:v){
        if(i==target){
            cout<<"target found "<<i;
        }
    }
    return 0 ;
}