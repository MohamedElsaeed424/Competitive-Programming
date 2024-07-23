#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <set>

using namespace std ;


int minPatches(vector<int>& nums, int n) {
    int size = nums.size() ;
    int patches = 0 ;
    int maxx =0 ;
    int i =0 ;
    while(maxx < n){
        if((i<size) && nums[i]<=maxx+1){ // if i can reach maxx+1
            maxx+=nums[i];
            i++;
        }else{
            maxx+=maxx+1; // add this patch if cannot reach it
            patches++;
        }
    }
    return patches ;
}