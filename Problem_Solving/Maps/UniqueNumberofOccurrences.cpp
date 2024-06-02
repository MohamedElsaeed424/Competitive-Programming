#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>

using namespace std ;

bool uniqueOccurrences(vector<int>& arr) {
    unordered_map<int,int>m ; unordered_set<int>occ;
    for (int i:arr)  m[i]++;
    for(auto p : m){
       occ.insert(p.second);
    }
    return occ.size() == m.size();
}