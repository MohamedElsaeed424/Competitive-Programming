#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std ;


void rotate(vector<int>& nums, int k) {
    if(k > nums.size()) k=k%nums.size();
    if(k == nums.size() || nums.size()==1 || nums.empty())return;
    vector<int>ans(nums.size()) ; int j = k ; int i ;
    for (i = 0; i < nums.size()-k; ++i) {
        ans[j]=nums[i]; j++;
    }
    j =0;
    for (int l = i; l < nums.size() ; ++l) {
        ans[j]=nums[l]; j++;
    }
    nums = ans ;
}
int main(){
    vector<int>a = {1,2,3,4,5,6,7};
    rotate(a,6);
    return 0 ;
}