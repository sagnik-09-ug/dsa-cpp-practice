#include <iostream>
using namespace std ;
int main ()
{
    int num[]={5, 15, 22, 1,-90,-24};
    int size=6,posmin, posmax;
    int smallest = INT_MAX;
    int maximum = INT_MIN;
    for(int i = 0 ; i<(size);i++){
        if(num[i]<smallest){
            smallest=num[i];
            posmin=i;
        }
        if(num[i]>maximum){
            maximum=num[i];
            posmax=i;
        }
    }
    cout<<"smallest is ="<<smallest<<"at position"<<posmin<<endl;
    cout<<"max is ="<<maximum<<"at pos "<<posmax;
    return 0 ;
}