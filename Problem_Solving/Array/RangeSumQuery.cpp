#include <iostream>
#include <vector>
#include <stack>
using namespace std ;
class NumArray {
public:
    vector<int>s ;
    NumArray(vector<int>& nums) {
        s =nums ;
    }
    int sumRange(int left, int right) {
        int sum =0 ;
        while (left <= right)
            sum += s[left++];
        return sum ;
    }
};