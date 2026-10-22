#include <iostream>
using namespace std ;
int main ()
{
    int arr1[]={2,3,5,8} , arr2[]={2,4,6,7,8};
    int n1=4,n2=5;
    for(int i=0;i<n2;i++){
        for(int j=0;j<n1;j++){
           if(arr2[i]==arr1[j]){
            cout<<arr2[i]<<" ";
           } 
        }
    }
    return 0 ;
}