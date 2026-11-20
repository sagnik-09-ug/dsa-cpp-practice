#include <iostream>
using namespace std ;
int factorial(int n){
    while(n>0){
        return n*factorial(n-1);
    }
    return 1;
}
int main ()
{
    cout<<factorial(0);
    return 0 ;
}