#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <vector>

using namespace std;

bool findSubarrays(vector<int>& nums) {
    unordered_set<int>sums ;
    for (int i = 0; i <nums.size()-1; ++i) {
        int tmp =nums[i]+nums[i+1] ;
        if(sums.find(tmp) != sums.end()) return true ;
        else sums.insert(tmp);
    }
    return false;
}