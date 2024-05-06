
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std ;

int singleNumber(vector<int>& nums) {
    unordered_map<int,int>a ;
    for (int i = 0; i < nums.size(); ++i) {
        a.insert({nums[i],a[nums[i]]++});
    }
    for (const auto& pair : a) {
        if (pair.second == 1) {
            return pair.first;
        }
    }
    return -1;
}

void main(){
    vector<int>nu = {-1};
    cout << singleNumber(nu);

    return 0;
}