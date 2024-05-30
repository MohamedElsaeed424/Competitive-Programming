#include <vector>
#include <unordered_map>
#include <math.h>
#include <unordered_set>
#include <iostream>
using namespace std ;

int findDuplicate(vector<int>& nums) {
    unordered_set<int> set ;
    for (int i = 0; i <nums.size() ; ++i) {
        if(set.find(nums[i])!= set.end()){
            return nums[i];
        }else
            set.insert(nums[i]);
    }
    return -1 ;
}


int main(){
//    vector<int>a ={1,2,3,1};
    vector<int>a ={1,2,3,1,2,3};
    cout << findDuplicate(a);
    return 0 ;
}