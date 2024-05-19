#include <vector>
#include <iostream>
#include <algorithm>
using namespace std ;


long long maxAlternatingSum(vector<int>& nums) {
    long long  evens =0 ; long long  odds = 0 ;
    for (int i = nums.size()-1; i >=0 ; --i) {
        evens = max(evens , odds+nums[i]);
        odds = max(odds , evens-nums[i]);
    }
    return evens ;
}
int main(){
    vector<int>a = {4,2,5,3};
    maxAlternatingSum(a);
    return 0 ;
}