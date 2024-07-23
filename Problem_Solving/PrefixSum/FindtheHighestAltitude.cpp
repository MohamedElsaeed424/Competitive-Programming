#include <vector>
#include <iostream>
#include <algorithm>


using namespace std ;


int largestAltitude(vector<int>& gain) {
    vector<int>dp(gain.size()+1);
    dp[0]=0;
    for (int i = 0; i < gain.size(); ++i) {
        dp[i+1] = gain[i]+dp[i];
    }
    return *max_element(dp.begin(),dp.end());
}