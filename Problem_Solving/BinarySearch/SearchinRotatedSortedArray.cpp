#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int>&matrix , int s , int e , int target){
    while (s <=e ){
        int m = s+(e-s)/2;
        if(matrix[m] == target){
            return m ;
        }else if (matrix[m] < target){
            s = m+1 ;
        }else{
            e = m-1 ;
        }
    }
    return -1 ;
}

int search(vector<int>& nums, int target) {
    int dec = -1 ; int i =0 ;int n1 =-1 ; int n2 =-1 ;
    for(i=0 ; i<nums.size()-1;i++){
        if (nums[i]>nums[i+1]) break;
    }
    if(i == nums.size()){
        n1 = binarySearch(nums,0,i,target);
        return n1 ;
    }else{
        dec = i+1;
        n1 = binarySearch(nums,0,i,target);
        n2 = binarySearch(nums,dec,nums.size()-1,target);
        return max(n1,n2);
    }
}

int main(){
    vector<int> a = {4,5,6,7,0,1,2};
    search(a,0);
    return 0 ;
}