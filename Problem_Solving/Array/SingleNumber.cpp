// singleNumber I and  II  and III
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std ;

vector<int> singleNumber(vector<int>& nums) {
    unordered_map<int,int>a ; vector<int>ans ;
    for (int i = 0; i < nums.size(); ++i) {
        a[nums[i]]++;
    }
    for (const auto& pair : a) {
        if (pair.second == 1) {
           ans.push_back(pair.first);
        }
    }
    return ans ;
}
