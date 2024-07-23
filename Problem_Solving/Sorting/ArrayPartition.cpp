#include <vector>
#include <bits/stdc++.h>
using namespace std ;

int arrayPairSum(vector<int>& nums) {
    int tot =0 ;
    sort(nums.begin() ,nums.end());
    for (int i = 1; i < nums.size(); i+=2) {
        tot+= min(nums[i],nums[i-1]);
    }
    return tot ;
}