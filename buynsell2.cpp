#include <iostream>
using namespace std ;
int main ()
{
vector<int> prices = {7, 1, 5, 3, 6, 4};    
int mp=0,bestbuy=prices.at(0);
    for(int i=1;i<prices.size();i++){
        if(prices.at(i)>bestbuy){
            mp=max(mp,prices.at(i)-bestbuy);
        }
        bestbuy=min(bestbuy,prices.at(i));
    }
    if(mp>0) cout<<mp;
    else cout<<0;
    return 0 ;
}