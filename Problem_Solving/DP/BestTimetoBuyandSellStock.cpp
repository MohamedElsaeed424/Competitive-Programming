#include <vector>
#include <algorithm>
using namespace std ;

int maxProfit(vector<int>& prices) {
    int i =0 ; int buy =INT_MAX ; int sell =0 ; int len = prices.size()-1;vector<int>prof;
    while (i < len){
        while(i < len && prices[i+1] <= prices[i]) i++;
        if(prices[i] < buy){buy = prices[i];}
        while (i < len && prices[i+1]>prices[i]) i++ ;
        sell = prices[i];
        prof.push_back(sell-buy) ;
    }
    if(prof.empty()) return 0;
    return *max_element(prof.begin(),prof.end());
}

int main(){
    vector<int>p = {1};
    maxProfit(p);
    return 0;
}