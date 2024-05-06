#include <vector>
#include <unordered_map>
#include <math.h>
#include <iostream>
using namespace std ;

vector<string> summaryRanges(vector<int>& nums) {
    vector<string>ans ;
    if(nums.size() ==0)return ans ;
    string s =""; bool lock =1 ;
    for (int i = 0; i < nums.size()-1 ; ++i) {
        if(nums[i+1] != nums[i]+1){
            s+=to_string(nums[i]); ans.push_back(s);s=""; lock =1 ;
        }else{
            if(lock !=0){
                s+=to_string(nums[i])+"->";lock =0 ;
            }
        }
    }
    s+=to_string(nums[nums.size()-1]); ans.push_back(s);
    return ans ;
}

int main(){
    vector<int> a ={0,2,3,4,6,8};
    vector<string>b = summaryRanges(a);
    for (int i = 0; i < b.size(); ++i) {
        cout << b[i] << ",";
    }
    return 0 ;
}