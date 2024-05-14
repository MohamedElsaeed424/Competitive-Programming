#include <vector>
#include <iostream>

using namespace std ;

int binarySearch(vector<int>& nums , int s ,int e ,int target){
    while (s<=e){
        int m = (s+(e))/2;
        if(nums[m]==target) return m ;
        else if(nums[m]<target)  s = m+1 ;
        else e =m -1;
    }
    return -1 ;
}

vector<int> searchRange(vector<int>& nums, int target) {
    vector<int>ans={-1,-1}; if(nums.empty()) return ans ;
    int index = binarySearch(nums,0 ,nums.size()-1,target);
    if(index ==-1) return ans ;
    int s = index ;int e = index;
    while (s > 0 && nums[s-1] == target) s--;
    while (e < nums.size() - 1 && nums[e+1] == target) e++;
    ans={s,e};
    return ans ;
}

int main(){
//    vector<int>nums ={5,7,7,8,8,8,8,8,8,8,10} ;
    vector<int>nums ={1} ;
    vector<int>a =searchRange(nums,1);
    for (int i = 0; i <a.size() ; ++i) {
        cout<<a[i]<<',';
    }
    return 0 ;
}