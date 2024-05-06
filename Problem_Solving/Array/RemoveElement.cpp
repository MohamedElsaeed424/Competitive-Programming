#include <vector>
#include <iostream>

using namespace std ;

int removeElement(vector<int>& nums, int val) {
    vector<int>ans ;
    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i]!= val)
            ans.push_back(nums[i]);
    }
    nums =ans ;
    return nums.size();
}



void main(){
    vector<int>a={3,2,2,3};
    removeElement(a,3);
    for (int i = 0; i < a.size(); ++i) {
        cout << a[i] << ',';
    }
    return 0 ;
}