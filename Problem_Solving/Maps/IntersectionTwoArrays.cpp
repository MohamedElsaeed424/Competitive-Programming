#include <vector>
#include <unordered_map>
#include <iostream>

using namespace std ;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    unordered_map<int,int> map ;
    vector<int>ans ;
    for (int i = 0; i < nums2.size(); ++i) {
        if(! (map.find(nums2[i])!=map.end())){
            map[nums2[i]]++;
        }
    }
    for (int i = 0; i <nums1.size(); ++i) {
        if(map.count(nums1[i]) && (map[nums1[i]]==1) ){
            map[nums1[i]]++;
            ans.push_back(nums1[i]);
        }
    }
    return ans ;
}

int main(){
    vector<int>num1 ={4,9,5};
    vector<int>num2 ={9,4,9,8,4};
    vector<int>ans = intersection(num1,num2);
    for (int i = 0; i <ans.size() ; ++i) {
        cout << ans[i] << "," ;
    }
    return 0 ;
}