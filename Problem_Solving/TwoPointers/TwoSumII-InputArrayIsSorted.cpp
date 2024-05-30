#include <vector>
#include <map>
using namespace std ;

vector<int> twoSum(vector<int>& nums, int target) { // instead of x+y=target try y=target-x
    vector<int>res ;
    map<int ,int>hm ;
    for (int i = 0; i < nums.size() ; ++i) {
        int diff = target- nums[i];
        if(hm.count(diff) != 0){
            res.push_back(hm[diff]+1); res.push_back(i+1);
            return res ;
        }else{
            hm.insert({nums[i] , i});
        }
    }
    return res;
}