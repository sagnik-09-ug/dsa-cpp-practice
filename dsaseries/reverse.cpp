#include <iostream>
#include <vector>
using namespace std ;
void reverse(vector<int>& v){
    int start = 0 , end = v.size() - 1;
    while (start < end) {
        swap(v.at(start),v.at(end));
        start++;
        end--;
    }
}
int main ()
{
    vector<int> v{2,4,6,7,8,9};
    for(int i: v){
        cout<<i<<" ";
    }
    cout<<"after reverse"<<endl;
    reverse(v);
    for(int i: v){
        cout<<i<<" ";
    }
    return 0 ;
}