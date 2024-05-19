#include <vector>
#include <algorithm>
using namespace std ;

int maxProfit(vector<int>& prices) {
    int i =0 ; int buy =0 ; int sell =0 ; int len = prices.size()-1;int profits=0 ;
    while (i < len){
        while(i < len && prices[i+1] <= prices[i]) i++;
        buy = prices[i];
        while (i < len && prices[i+1]>prices[i]) i++ ;
        sell = prices[i];
        profits+=sell-buy ;
    }
    return profits;
}