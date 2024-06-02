#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <set>

using namespace std ;


vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
    unordered_map<int,int>m ; unordered_map<int,int>mm;
    vector<vector<int>>ans(2) ;
    for (int i = 0; i <nums1.size() ||i <nums2.size()  ; ++i) {
        if(i<nums1.size()) m[nums1[i]]=i;
        if(i<nums2.size()) mm[nums2[i]]=i;
    }
    for(auto pair:m){
        if(mm.find(pair.first)==mm.end()) ans[0].push_back(pair.first);
    }
    for(auto pair:mm){
        if(m.find(pair.first)==m.end()) ans[1].push_back(pair.first);
    }
    return ans ;
}

int main(){
    vector<int>a = {1,2,3};
    vector<int>b ={2,4,6};
    findDifference(a,b);
    return 0 ;
}