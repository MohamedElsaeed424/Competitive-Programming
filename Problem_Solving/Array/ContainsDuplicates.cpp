#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std ;

bool containsDuplicate(vector<int>& nums) {
    unordered_set<int>set ;
    for (int i = 0; i < nums.size(); ++i) {
        set.insert(nums[i]);
    }
    return set.size() != nums.size();
}
void main(){
    vector<int>nums ={1,2,3,};
    cout << containsDuplicate(nums);
}