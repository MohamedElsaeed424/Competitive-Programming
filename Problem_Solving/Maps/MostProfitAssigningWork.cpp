#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <unordered_set>

using namespace std ;
int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
    int tot =0 ;
    vector<pair<int,int>>dp(difficulty.size()) ;
    for (int i = 0; i < difficulty.size(); ++i) {
        dp[i]={difficulty[i],profit[i]};
    }
    sort(dp.begin(),dp.end());

    int maxx =0 ;
    for (int i = 0; i < dp.size(); ++i) {
        maxx = max(dp[i].second,maxx);
        dp[i].second = maxx ;
    }
    int j = 0;
    sort(worker.begin(),worker.end());
    for (int i = 0; i < worker.size(); ++i) {
        while (j < difficulty.size() && dp[j].first <= worker[i]) {
            ++j;
        }
        if (j > 0) {
            tot += dp[j - 1].second;
        }
    }

    return tot ;
}


//  not effitient
//int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
//    map<int,int>dp ;
//    int tot =0 ;
//    for (int i = 0; i < difficulty.size(); ++i) {
//        dp[difficulty[i]]=max(dp[difficulty[i]], profit[i]);
//    }
//    int maxx =0 ;
//    for (int i = 0; i < worker.size() ; ++i) {
//        maxx =0 ;
//        for(auto p : dp){
//            if(p.first <= worker[i]){
//                maxx = max(maxx , p.second);
//            }else{
//                break;
//            }
//        }
//        tot+=maxx;
//    }
//    return tot ;
//}
int main()
{
    vector<int>a={66,1,28,73,53,35,45,60,100,44,59,94,27,88,7,18,83,18,72,63};
    vector<int>b={66,20,84,81,56,40,37,82,53,45,43,96,67,27,12,54,98,19,47,77};
    vector<int>c={61,33,68,38,63,45,1,10,53,23,66,70,14,51,94,18,28,78,100,16};
   cout << maxProfitAssignment(a,b,c);
    return 0 ;
}