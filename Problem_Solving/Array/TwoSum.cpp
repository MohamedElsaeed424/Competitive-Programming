#include <iostream>
#include <vector>
#include <map>

using namespace std;

// brute force

//vector<int> twoSum(vector<int>& nums, int target) {
//    vector<int>res ;
//    for(int i =0 ; i < nums.size();i++){
//        for (int j = i+1; j < nums.size(); ++j) {
//            int sum = nums[i]+nums[j];
//            if(sum == target){
//                res.push_back(i); res.push_back(j);
//                return res ;
//            }
//        }
//    }
//    return res;
//}

// Hash map
vector<int> twoSum(vector<int>& nums, int target) { // instead of x+y=target try y=target-x
    vector<int>res ;
    map<int ,int>hm ;
    for (int i = 0; i < nums.size() ; ++i) {
        int diff = target- nums[i];
        if(hm.count(diff) != 0){
            res.push_back(hm[diff]); res.push_back(i);
            return res ;
        }else{
            hm.insert({nums[i] , i});
        }
    }
    return res;
}

int main(){
    vector<int>arr = {3,2,4};
    vector<int>res = twoSum(arr , 6);
    for (int i = 0; i <res.size() ; ++i) {
        cout << res[i] << " ";
    }

}