#include <iostream>
using namespace std ;
void swap(int arr[],int sz){
    int temp;
    int M = INT_MIN;
    int m= INT_MAX;
    int posmax,posmin;
    for(int i=0;i<sz;i++){
        cout<<arr[i]<<" ";
       }
    for(int i=0;i<sz;i++){
        if(arr[i]<m){
            m=arr[i];
            posmin=i;
        }
        if(arr[i]>M){
            M=arr[i];
            posmax=i;
        }
    }
    temp =arr[posmin];
    arr[posmin] = arr[posmax];
    arr[posmax]=temp;
}
int main ()
{
    int arr[]={1,2,3};
    int sz=3;
    swap(arr,sz);
       for(int i=0;i<sz;i++){
        cout<<arr[i]<<" ";
       }
    return 0 ;
}