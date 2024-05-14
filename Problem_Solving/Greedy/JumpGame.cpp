#include <vector>
using namespace std ;

bool canJump(vector<int>& nums) {
    int goalIdx = nums.size() -1 ;
    for (int i = nums.size()-1; i >=0; --i) {
        if(i+nums[i]>=goalIdx) goalIdx = i ;
    }
    return goalIdx == 0 ;
}