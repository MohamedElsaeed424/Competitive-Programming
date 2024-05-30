#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <unordered_set>
#include <unordered_map>
using namespace std ;

bool isGood(vector<int>& nums) {
    int size = nums.size() ; unordered_map<int,int>map ;
    for (int n:nums) {
        if(n >size)return false ;
        if(map.find(n)!= map.end()) if(n < size-1) return false ;
        map[n]++;
    }
    return (map[size-1] == 2);
}
int main(){
    vector<int>a = {1,3,3,2};
    cout << isGood(a);
    return 0 ;
}