#include <vector>
#include <bits/stdc++.h>
using namespace std ;


// 3,2,1,2,1,7
// 1,1,2,2,3,7
// 1,2,3,4,5,7
int minIncrementForUnique(vector<int>& nums) {
    if (nums.size() == 0 || nums.size() ==1) return 0 ;
    sort(nums.begin() , nums.end());
    int c =0 ;
    for (int i = 1; i < nums.size() ; ++i) {
        if(nums[i]<=nums[i-1]){
            c += nums[i - 1] + 1 - nums[i];
            nums[i] = nums[i-1]+1 ;
        }
    }
    return c ;
}
int main(){
    vector<int>a = {3,2,1,2,1,7};
    minIncrementForUnique(a);
    return 0 ;
}