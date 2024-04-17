#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std ;


int majorityElement(vector<int>& nums) {
    unordered_map<int,int > map;
    int firstMax = 0 ;
    int secondMax =  0 ;
    for (int i = 0; i <nums.size() ; ++i) {
        if(map.find(nums[i]) != map.end()){
            map.insert({nums[i] ,map[nums[i]]++});
        }else{
            map.insert({nums[i] ,1});
        }
        if(map[nums[i]] > secondMax){
            firstMax = nums[i];
            secondMax = map[nums[i]];
        }
    }
    return firstMax;
}

int main(){
    vector<int> arr = {1} ;
    cout << majorityElement(arr);
    return 0 ;
}