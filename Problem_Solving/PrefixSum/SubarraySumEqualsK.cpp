#include <vector>
#include <unordered_map>
#include <map>
#include <math.h>
#include <unordered_set>
#include <iostream>
using namespace std ;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>m ;
        int sum =0 ; int c =0 ;
        m[sum]=1;
        for (int i = 0; i < nums.size(); ++i) {
            sum+=nums[i];
            int find = sum-k;
            if(m.find(find)!=m.end()){
                c=+m[find];
            }
            m[sum]++;
        }
        return c ;
    }
};












