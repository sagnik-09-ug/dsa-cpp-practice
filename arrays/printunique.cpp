#include <iostream>
using namespace std ;
int check(int arr[], int sz,int target){
    int flag=0;
    for(int i=0;i<sz;i++){
        if(arr[i]==target)
        flag++;
    }
    return flag;
}
int main ()
{
    int arr[]= {1,1,2,4,4,5,9,7,7,6};
    int sz=10;
    for(int i=0;i<sz;i++){
        if(check(arr,sz,arr[i])<2){
        cout<<arr[i]<<" ";}
    }
    return 0 ;
}