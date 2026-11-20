#include <iostream>
using namespace std ;
void printnums(int n){
    if(n==1) {
        cout<<"1\n";
        return;
    }
    cout<<n<<endl;
    printnums(n-1);
}
int main ()
{
    printnums(5);
    return 0 ;
}