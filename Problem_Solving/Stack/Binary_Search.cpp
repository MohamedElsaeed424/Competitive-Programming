#include <iostream>
#include <vector>

using  namespace std ;

int binarySearch(vector<int>& nums , int l , int r ,int x){
    while (l <= r){
        int m = l+(r-l)/2 ;
        if(nums[m] == x){
            return m ;
        }else if (nums[m]<x){
            l = m +1;
        }else{
            r =m-1 ;
        }
    }
    return -1 ;
}