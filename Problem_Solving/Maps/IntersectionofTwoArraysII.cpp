#include <vector>
#include <unordered_map>
using namespace std ;


vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    vector<int>ans ;
    if(nums1.size() ==0 || nums2.size() ==0 ) return ans ;
    unordered_map<int,int>m ; unordered_map<int,int>n ;
    for (int i = 0; i <nums1.size() || i < nums2.size() ; ++i) {
        if(i < nums1.size()) m[nums1[i]]++;
        if(i < nums2.size()) n[nums2[i]]++;
    }
    for(auto &pair : m){
        if(n.count(pair.first)){
            for (int i = 0; i < min(n[pair.first],pair.second) ; ++i) {
                ans.push_back(pair.first);
            }
        }
    }
    return ans ;
}