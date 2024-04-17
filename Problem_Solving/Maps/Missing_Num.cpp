#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <unordered_set>
using namespace std ;

int missingNumber(vector<int>& nums) {
    int sum =0 ;
    int max =nums.size() ;
    int min =nums[0] ;

    for (int i = 0; i <nums.size() ; ++i) {
        sum+=nums[i];
        if(nums[i]<min)
            min = nums[i];
    }
    return ( ((max * (max + 1) / 2) - ((min - 1) * min / 2)) - sum) ;
}

int main(){
    vector<int> nums = {0,1};
    cout << missingNumber(nums);
}