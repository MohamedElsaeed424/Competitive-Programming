#include <vector>
using namespace std ;

int jump(vector<int>& nums) {
    int minSteps =0 ;int l =0; int r =0 ;
    while(r < nums.size()-1){
        int mostFar =0;
        for (int i = l; i <= r; ++i)
            mostFar = nums[i]+i>mostFar ? nums[i]+i : mostFar ;
        l = r+1;
        r=mostFar ;
        minSteps++;
    }
    return minSteps;
}

int main(){
    vector<int>a = {2,3,1,1,4};
    jump(a);
    return 0 ;
}