#include <vector>
#include <bits/stdc++.h>
using namespace std ;


int specialArray(vector<int>& nums) {
    sort(nums.begin() , nums.end() , greater<int>());
    int n  = nums.size();
    if(nums[n-1]> n) return n ;
    if(nums[0]==0) return -1 ;
    int s =0 ; int e = n-1 ; int m =0 ;
    while (s <=e ){
        m = s+(e-s)/2;
        if(nums[m] > m){
            s = m+1 ;
        }else if (nums[m] < m) {
            e = m - 1;
        }else{
            return -1 ;
        }
    }
    return nums[m] > m ? m+1 : m;
}

int main(){
    vector<int> a = {0,4,3,0,4};
    specialArray(a);
    return 0 ;
}