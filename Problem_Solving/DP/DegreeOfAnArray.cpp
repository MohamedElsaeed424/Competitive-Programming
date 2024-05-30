#include <iostream>
#include <vector>
#include <math.h>
#include <unordered_map>

using namespace std ;


int findShortestSubArray(vector<int>& nums) {
    unordered_map<int,pair<int,pair<int,int>>>map;
    for(int i =0 ; i<nums.size();++i){
        if(map.find(nums[i])!= map.end()){
            map[nums[i]].first++ ;
            map[nums[i]].second.second = i+1 ;
        }else{
            map[nums[i]].first =1 ;
            map[nums[i]].second.first = i ;
            map[nums[i]].second.second = i+1 ;
        }
    }
    int diff= INT_MAX;
    int freq =0;
    for(auto pair:map){
        if(pair.second.first > freq
           || (pair.second.first  == freq &&
               pair.second.second.second - pair.second.second.first < diff )){
            diff = pair.second.second.second - pair.second.second.first;
            freq = pair.second.first ;
        }
    }
    return diff ;
}

int main(){
    vector<int>n = {1,2,2,3,1,4,2};
   cout <<  findShortestSubArray(n);
}