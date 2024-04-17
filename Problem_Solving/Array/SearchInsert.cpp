#include <iostream>
#include <vector>

using namespace std ;

int searchInsert(vector<int>& nums, int target) {
    int l = 0 ;
    int r = nums.size() -1 ;
    while(l<=r){
        int m = (l+r)/2 ;
        if(nums[m] == target)
            return m ;
        else if (nums[m] < target)
            l = m +1 ;
        else
            r =m-1 ;
    }
    return l ;
}

int main(){
    vector<int> nums = {3,4,5,6,7,8} ;
    cout << searchInsert(nums , 6)  ;
    return 0 ;
}