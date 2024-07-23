#include <vector>
#include <unordered_map>
#include <map>
#include <math.h>
#include <unordered_set>
#include <iostream>
using namespace std ;


bool isPossible(vector<int>& nums) {
    int n=nums.size();
    unordered_map<int,int>count;
    unordered_map<int,int>end;

    for(int i=0;i<n;i++) {count[nums[i]]++;}

    for(int i=0;i<n;i++)
    {
        if(count[nums[i]]==0){continue;}

        count[nums[i]]--;
        if(end[nums[i] - 1] > 0)
        {
            end[nums[i] - 1]--;
            end[nums[i]]++;
        }
        else if(count[nums[i] + 1]!=0 && count[nums[i] + 2]!=0)
        {
            count[nums[i] + 1]--;
            count[nums[i] + 2]--;
            end[nums[i] + 2]++;
        }
        else
        {return false;}

    }
    return true;
}

int main(){
    vector<int>a = {1,2,3,4,4,5};
    isPossible(a);
    return 0 ;
}