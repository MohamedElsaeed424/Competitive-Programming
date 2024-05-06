#include <iostream>
#include <vector>

using namespace std ;


void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    if(n ==0)
        return;
    if(m == 0){
        nums1 =nums2 ;
        return;
    }
    int a[m+n];
    int  i=0 ;int s =0;  int j=0 ;int c =0;
    while( j < n) {
        if(s < m&& nums1[s]== nums2[j]){
            a[c] = nums1[s];c++;s++ ;a[c]=nums2[j];c++;j++ ;
        }
        else if(s <m && nums1[s] < nums2[j]) {
            a[c] = nums1[s];c++; s++;
        }else{
            a[c] = nums2[j]; c++;j++;
        }
    }
    for(int k =s ; k < m ;++k) {
        a[c] = nums1[k];
        c++;
    }
    nums1 ={};
    for (int k = 0; k < (m+n); ++k)
        nums1.push_back(a[k]);
}
// -1 1 1

void main(){
    vector<int>n = {2,0};
    vector<int>m = {1};
    merge(n,1,m,1);
    for (int i : n) {
        cout << i << ',' ;
    }
    return 0 ;
}