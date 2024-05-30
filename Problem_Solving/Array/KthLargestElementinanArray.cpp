#include <iostream>
#include <vector>
#include <map>

using namespace std ;


int findKthLargest(vector<int>& nums, int k) {
    map<int,int>map ;
    for (int i = 0; i <nums.size() ; ++i) map[nums[i]]++;
    int c =0 ;
    for(auto pair : map){
        for (int i = 0; i < pair.second; ++i) {
            nums[c++]=pair.first;
        }
    }
    return nums[nums.size()-k];
}