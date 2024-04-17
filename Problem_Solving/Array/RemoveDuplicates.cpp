#include <iostream>
#include <vector>
#include <stack>

using namespace std ;

int removeDuplicates(vector<int>& nums) {
    vector<int>ans ;
    int k =0 ;
    ans.push_back(nums[0]);
    int c =0 ;
    for (int i = 1 ; i < nums.size(); ++i) {
        if(nums[i] != ans[c] ){
            ++c ;
            ans.push_back(nums[i]);
        }
    }
    nums = ans ;
    k = ans.size() ;
    return k ;
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