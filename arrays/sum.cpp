#include <iostream>
using namespace std ;
int sum(int arr[],int sz){
    int s =0;
    for(int i =0 ; i<sz;i++){
        s+=arr[i];
    } return s;
    
}
int main ()
{
    int arr[]={1,2,3,4,5};
    int sz = 5;
    cout<<"sum = "<<sum(arr,sz);
    return 0 ;
}