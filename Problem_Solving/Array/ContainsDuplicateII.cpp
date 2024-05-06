#include <vector>
#include <unordered_map>
#include <math.h>
#include <iostream>
using namespace std ;

bool containsNearbyDuplicate(vector<int>& nums, int k) {
    unordered_map<int,int> map ;
    for (int i = 0; i <nums.size() ; ++i) {
        if(map.count(nums[i])){
            if(abs(i-map[nums[i]]) <=k) return true ;
            else map[nums[i]] = i ;
        }else map[nums[i]]=i;
    }
    return false ;
}

int main(){
//    vector<int>a ={1,2,3,1};
    vector<int>a ={1,2,3,1,2,3};
    cout << containsNearbyDuplicate(a,2);
    return 0 ;
}