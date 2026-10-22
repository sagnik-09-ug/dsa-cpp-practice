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
    int arr[]={2,2,1};
    int sz = 3;
     for(int i =0;i<sz;i++){
        if(check(arr,sz,arr[i])<2){
            cout<<arr[i]<<endl;
        }
    }
    return 0 ;
}