#include <iostream>
#include <vector>
using namespace std ;
int main ()
{
    vector<int> v1 ; //vector of size 0
    vector<int> v2{1,2,3} ; //vector with initialized elements 
    vector<int> v3(5,0); //vector with size 5 and all elements 0
    // vector <int> vec(5,0);
    vector <char> vec{ 'a' , 'b','c','d'};
    cout<<"size ="<<vec.size()<<endl;
    for(char i:vec)//for each loop
    {
        cout<<i<<" ";
    }
    vector<int> v;
    cout<<"size ="<<v.size()<<endl;
    v.push_back(25);
    v.push_back(35);
    v.push_back(45);
    cout<<"size ="<<v.size()<<endl;
    v.pop_back();
    for(int i:v)//for each loop
    {
        cout<<i<<" ";
    }
    cout<<v.front()<<endl;
    cout<<v.back()<<endl;
    cout<<v.at(0)<<endl;
    cout<<v.at(1)<<endl;
    /*
    static allocation :
    is done during compilation
    is stored in stack
    int arr[2]

    dynamic allocation
    is done during runtime
    stored in heap
    vector<int> v(can be resized)
     */
    vector<int> v4;
    v4.push_back(1);
    v4.push_back(2);
    v4.push_back(3);
    v4.push_back(4);
    v4.push_back(5);
    cout<<v4.capacity()<<endl; //8
    cout<<v4.size()<<endl;//
    return 0 ;
}