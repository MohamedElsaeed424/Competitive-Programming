#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <iostream>
using namespace std ;

int minDifference(vector<int>& nums) {
    if(nums.size() < 5) return 0 ;
    sort(nums.begin() , nums.end());
    int n = nums.size() ;
    int i =0;
    int minn =INT_MAX ;
    while(i < 4){
        minn = min(nums[n-4+i]-nums[i],minn);
        i++;
    }
    return minn ;
}

int main(){
    vector<int>a={1,5,0,10,14};
    cout << minDifference(a);
    return 0 ;
}