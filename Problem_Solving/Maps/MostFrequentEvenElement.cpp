#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <map>
#include <vector>

using namespace std ;


int mostFrequentEven(vector<int>& nums) {
    map<int,int>map ;
    for(int n : nums){
        if(n%2==0) map[n]++;
    }
    if(map.empty()) return -1 ;
    pair<int,int>kv ;
    for (auto p:map) {
        if(p.second > kv.second){
            kv.first=p.first;
            kv.second=p.second;
        }
    }
    return kv.first ;
}