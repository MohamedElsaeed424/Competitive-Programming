#include <vector>
#include <unordered_map>
#include <math.h>
#include <iostream>
#include <unordered_map>
using namespace std ;


bool checkSubarraySum(vector<int>& nums, int k) {
    unordered_map<int,int>m ;
    int sum =0 ;
    for (int i = 0; i <nums.size() ; ++i) {
        sum+=nums[i];
        if(m.find(sum%k)!=m.end()){
            if(i-m[sum%k] >=2) return true ;
        }else{
            m[sum%k]=i;
        }
    }
    return false ;
}

int main(){
    vector<int>a = {23,2,4,6,7};
    checkSubarraySum(a ,6);
    return 0 ;
}