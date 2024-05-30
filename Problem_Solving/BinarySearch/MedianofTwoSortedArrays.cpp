#include <iostream>
#include <vector>

using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int n = nums1.size()-1 ;
    double ans =0.0 ;
    if(nums1.size() ==0 && nums2.size()>0){
        if(nums2.size()%2 ==0)
            ans = ((nums2[nums2.size()/2]+nums2[(nums2.size()/2)-1])/2.0);
        else
            ans = nums2[nums2.size()/2];
    }else if(nums1.size() >0 && nums2.size()==0){
        if(nums1.size()%2 ==0)
            ans = ((nums1[nums1.size()/2]+nums1[(nums1.size()/2)-1])/2.0);
        else
            ans = nums1[nums1.size()/2];
    }else if((nums1.size() %2 ==0 &&nums2.size() %2 ==0) || (nums1.size() %2 !=0 &&nums2.size() %2 !=0))
        ans = ((nums1[n]+nums2[0])/2.0);
    else if(nums1.size() %2 ==0 &&nums2.size() %2 !=0)
        ans = (nums2[0]);
    else if(nums1.size() %2 !=0 &&nums2.size() %2 ==0)
        ans = (nums1[n]);
    else
        ans = 0.0 ;
    return ans < 0 ? 0.0 : ans ;
}
