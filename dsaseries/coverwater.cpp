#include <iostream>
using namespace std ;
int main ()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n;
        string s;
        cin>>n>>s;
        bool found = false;
for (int i = 0; i + 2 < n; i++) {
    if (s[i] == '.' && s[i+1] == '.' && s[i+2] == '.') {
        found = true;
    }
}

if (found) cout << 2 << "\n";
else cout << count(s.begin(), s.end(), '.') << "\n";
    }
    return 0 ;
}