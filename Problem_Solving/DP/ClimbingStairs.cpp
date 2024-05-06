#include <iostream>
#include <vector>
using namespace std ;

int climbStairs(int n) {
    vector<int>ans ;
    ans.push_back(1);ans.push_back(1);
    for (int i = 2; i <= n; ++i) {
        ans.push_back(ans[i-1]+ans[i-2]);
    }
    return ans.back();
}

void main(){
    cout << climbStairs(5);
    return 0 ;
}