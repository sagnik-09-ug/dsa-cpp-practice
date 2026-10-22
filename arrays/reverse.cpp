#include <iostream>
using namespace std ;
void reverse(int arr[],int n){
    int temp;
    for(int i = 0; i<n/2;i++){
        swap(arr[i],arr[n-i-1]);
    }
}
int main ()
{
    int arr[] = {4,2,7,8,1,2,5};
    int n=7;
    for(int i = 0; i<n;i++){
        cout<<arr[i]<<endl;
    }
    cout<<endl;
    reverse(arr,n);
    for(int i = 0; i<n;i++){
        cout<<arr[i]<<endl;
    }
    
    return 0 ;
}