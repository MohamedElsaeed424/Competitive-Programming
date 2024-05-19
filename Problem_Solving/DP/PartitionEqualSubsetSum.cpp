#include <vector>
#include <climits>
#include <iostream>
#include <numeric>
#include <set>
using namespace std ;

bool canPartition(vector<int>& nums) {
    int sum = (accumulate(nums.begin(),nums.end(),0));
    if(sum %2 ) return false ;
    int target  = sum /2 ;
    set<int> dp ;dp.insert(0);
    for (int i =nums.size()-1 ; i >=0 ; --i ) {
        set<int>tmpDp ;
        for(int n : dp) {tmpDp.insert(nums[i]+n); tmpDp.insert(n);}
        dp =tmpDp ;
        if (dp.find(target) != dp.end()) return true;
    }
    return false ;
}