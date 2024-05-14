#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std ;
vector<int> productExceptSelf(vector<int>& nums) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int>prod(nums.size());prod[0]=1;
    for (int i = 1; i < nums.size(); ++i)
        prod[i]=prod[i-1]*nums[i-1];
    int right=nums[nums.size()-1] ;
    for (int i = nums.size()-2; i >=0 ; --i) {
        prod[i]*=right;
        right*=nums[i];
    }
    return prod;
}
int main(){
    vector<int>s = {1,2,3,4};
    vector<int>a =productExceptSelf(s);
    for (int i = 0; i < a.size(); ++i) {
        cout << a[i]<<',';
    }
    return 0 ;
}