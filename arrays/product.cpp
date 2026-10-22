#include <iostream>
using namespace std ;
int product(int arr[],int sz){
    int p=1;
    for(int i=0;i<sz;i++){
        p=p*arr[i];
    }return p;
}
int main ()
{
    int arr[]={1,2,3,4};
    int sz= 4;
    cout<<"product is "<<product(arr,sz);
    return 0 ;
}