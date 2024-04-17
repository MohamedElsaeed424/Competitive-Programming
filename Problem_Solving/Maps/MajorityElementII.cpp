#include <iostream>
#include <vector>
#include <map>

using namespace std ;


vector<int> majorityElement(vector<int>& nums) {
    map<int,int>map ;vector<int>ans ;
    for (int i = 0; i <nums.size() ; ++i)
        map[nums[i]]++;
    for (const auto& pair : map) {
        if(pair.second > (nums.size()/3) )
            ans.push_back(pair.first) ;
    }
    return ans ;
}

int main(){
    vector<int> arr = {1,2} ;
    vector <int> q=  majorityElement(arr);
    for (int i = 0; i < q.size(); ++i) {
        cout << q[i] << ',' ;
    }
    return 0 ;
}