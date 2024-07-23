#include <string>
#include <map>
#include <iostream>
#include <vector>
#include <math.h>
#include <fstream>
#include <algorithm>
#include <set>
using namespace std ;


double minimumAverage(vector<int>& nums) {
    if(nums.size() == 0) return 0.0 ;
    sort(nums.begin(),nums.end());
    double minn = INFINITY ;
    int n = nums.size();
    int i =0 ; int j = n-1;
    while (i<n){
        double avg = (nums[i]+nums[j])/2 ;
        minn = min(minn , avg );
    }
    return minn ;

}