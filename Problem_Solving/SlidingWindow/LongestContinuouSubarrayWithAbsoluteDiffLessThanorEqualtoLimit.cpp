#include <string>
#include <map>
#include <iostream>
#include <vector>
#include <math.h>
#include <set>
#include <queue>
#include <fstream>
using namespace std ;
int longestSubarray(vector<int>& nums, int limit) {
    int ans =0 ;
    // to store indices
    deque<int> minQueue ;
    deque<int> maxQueue ;
    int s =0 ; int e =0 ;
    while (e < nums.size()){
        int x = nums[e];

        while(!minQueue.empty() && nums[minQueue.back()] >= x) minQueue.pop_back();
        minQueue.push_back(e);

        while(!maxQueue.empty() && nums[maxQueue.back()] <= x) maxQueue.pop_back();
        maxQueue.push_back(e);

        int minn = nums[minQueue.front()];
        int maxx = nums[maxQueue.front()];

        if( (maxx-minn) > limit){
            s++;
            if(s>minQueue.front()) minQueue.pop_front();
            if(s>maxQueue.front()) maxQueue.pop_front();
        }else{
            ans = max(ans, (e-s)+1);
            e++;
        }
    }
    return ans ;
}

