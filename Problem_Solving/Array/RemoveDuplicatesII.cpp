#include <iostream>
#include <vector>
#include <unordered_map>
#include <stack>

using namespace std ;

int removeDuplicates(vector<int>& nums) {
    vector<int>ans ; unordered_map<int,int>nc ;
    ans.push_back(nums[0]);
    nc[nums[0]]++;
    int c =0 ; int count  =0 ;
    for (int i = 1 ; i < nums.size(); ++i) {
        if(nc[nums[i]] < 2){
            ++c ;
            ans.push_back(nums[i]);
        }
        nc[nums[i]]++;
    }
    nums = ans ;
    return ans.size() ;
}


int main(){
//    vector<int>nums = {0,0,1,1,1,2,2,3,3,4} ;
    vector<int>nums = {1,1,2} ;
    cout<< removeDuplicates(nums)<<endl;
    for (int i = 0; i <nums.size() ; ++i) {
        cout<< nums[i]<<"," ;
    }
    return 0 ;
}