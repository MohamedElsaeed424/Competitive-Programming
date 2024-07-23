#include <string>
#include <map>
#include <iostream>
#include <vector>
#include <math.h>
#include <fstream>
#include <algorithm>
#include <set>
using namespace std ;

vector<vector<int>> threeSum(vector<int>& nums) {
    int n  = nums.size() ;
    if(n ==0) return {} ;
    set<vector<int>>ans ;
    vector<vector<int>> anss ;
    sort(nums.begin(),nums.end());
    for (int i = 0; i < n ; ++i) {
        int j =i+1 ; int k = n-1 ;
        while(j<k){
            int sum = nums[i]+nums[j]+nums[k] ;
            if( sum ==0){
                vector<int>a = {nums[i],nums[j],nums[k]};
                ans.insert(a) ;
                j++;k--;
            }else if(sum <0){
                j++;
            }else{
                k--;
            }
        }
    }
    for(auto p : ans){
        anss.push_back(p);
    }
    return anss ;
}

int main(){
    vector<int>a={-1,0,1,2,-1,-4};
    threeSum(a);
    return 0 ;
}
