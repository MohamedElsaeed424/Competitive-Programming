#include <iostream>
#include <vector>

using namespace std;

int findMin(vector<int>& nums) {
    int i ;
    for(i=0 ; i<nums.size()-1;i++){
        if (nums[i]>nums[i+1]) break;
    }
    if(i == nums.size()-1) return nums[0];
    return nums[i+1];
}

int main(){
    vector<int> a = {11,13,15,17};
    cout << findMin(a);
    return 0 ;
}