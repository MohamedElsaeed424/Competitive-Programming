#include <vector>
#include <string>
#include <unordered_map>
#include <iostream>
using namespace std ;

//  [ 1 , 0]
//i   .
//j       .
void moveZeroes(vector<int>& nums) {
    if(nums.size()==1 ||
       nums.empty() ||
            (nums.size()==2 && nums[1]==0)) return ;
    int i =0 ; int j =0 ;
    while(i<nums.size() && j<nums.size()){
        if(nums[j]!=0)
            j++;
        else if (nums[i]!=0 && i>j){
            int tmp = nums[i];
            nums[i] =nums[j];
            nums[j] =tmp ;
            j++ ;
            i++;
        }else
            i++;
    }
}

int main(){
//    vector<int>a = {0,1,0,3,12};
//    vector<int>a = {0,1};
    vector<int>a = {2,1};
    moveZeroes(a);
    return 0 ;
}