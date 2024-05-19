#include <vector>
#include <iostream>
using namespace std ;
/*  0 1 2 3 4   5
 * [2,7,9,3,1]
 *
 * i = 0
 * n1 = 2+9+1
 * n2 = 7+3
 *
 */
int rob(vector<int>& nums) {
    if(nums.empty())return 0 ;
    if(nums.size() == 1) return nums[0];
    int n1 = 0; int n2  = 0;int ans =0 ;
    for (int i = 0; i <nums.size() ; i++) {
        ans = max(nums[i]+n1 ,n2);
        n1 =n2 ;
        n2 =ans ;
    }
    return n2;
}

int main(){
    vector<int>a ={1,2,3,1};
    cout << rob(a);
}