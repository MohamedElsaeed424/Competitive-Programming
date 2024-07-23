#include <vector>
#include <bits/stdc++.h>
#include <map>
using namespace std ;

vector<int> sortArray(vector<int>& nums) {
    map<int ,int>m ;
    for(int n : nums) m[n]++;
    int i =0 ;
    for(auto p : m){
        for (int j = 0; j < p.second ; ++j) {
            nums[i]=p.first;i++;
        }
    }
    return nums ;
}