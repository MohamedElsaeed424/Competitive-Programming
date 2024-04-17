#include <iostream>
#include <vector>
#include <stack>
#include <iterator>
#include <algorithm>

using  namespace std ;

int partition(vector<int>&arr,int low,int high)
{
    //choose the pivot
    int pivot=arr[high];
    //Index of smaller element and Indicate
    //the right position of pivot found so far
    int i=(low-1);
    for(int j=low;j<=high;j++)
    {
        //If current element is smaller than the pivot
        if(arr[j]<pivot)
        {
            //Increment index of smaller element
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return (i+1);
}

// The Quicksort function Implement
void quickSort(vector<int>&arr ,int low,int high)
{
    // when low is less than high
    if(low<high)
    {
        // pi is the partition return index of pivot
        int pi=partition(arr,low,high);
        //Recursion Call
        //smaller element than pivot goes left and
        //higher element goes right
        quickSort(arr,low,pi-1);
        quickSort(arr,pi+1,high);
    }
}
int binarySearch(vector<int>& nums , int l , int r ,int x){
    cout << l+(r-1)/2 ;
    while (l <= r){
        int m = l + (r -1)/2 ;
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

vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    vector<int>res ;
    quickSort(nums2 , 0, nums2.size()-1 ) ;
    for(int i =0 ; i<nums1.size() ; i++){
        int j = binarySearch(nums2 ,0 , nums2.size()-1 , nums1[i]) ; // to reduce the range of search
        int biggerFound =0 ;
        for(int k = j ; k < nums2.size() ; k ++){
            if (nums2[k] > nums2[j]){
                res.push_back(nums2[k]);
                biggerFound =1 ;
                break;
            }
        }
        if (biggerFound == 0){
            res.push_back(-1);
        }
    }
    return  res ;
}

int main(){
    vector<int> arr1 = {4,1,2};
    vector<int> arr2 ={1,3,4,2};
    vector<int> res = nextGreaterElement(arr1 , arr2);
    copy(res.begin(), res.end(),ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;

}
