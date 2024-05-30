#include <vector>
#include <limits.h>
#include <iostream>
using namespace std ;

int dp(int i ,vector<int>& nums , int target , int sum ){
    if(i == nums.size()) return  sum == target ? 1:0 ;
    return dp(i+1,nums,target,sum+nums[i]) + dp(i+1,nums,target,sum-nums[i])  ;
}
int findTargetSumWays(vector<int>& nums, int target) {
    return dp(0 , nums, target ,0);
}



