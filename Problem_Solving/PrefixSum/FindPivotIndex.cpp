#include <vector>
#include <unordered_map>
#include <math.h>
#include <iostream>
#include <unordered_map>
using namespace std ;

int pivotIndex(vector<int>& nums) {
    int size = nums.size();
    if (size == 0) return -1;
    vector<int> f(size + 2, 0);
    vector<int> b(size + 2, 0);
    for (int i = 0; i < size; ++i) {
        f[i+1] = f[i] + nums[i];
        b[size-i] = b[size-i+1] + nums[size-i-1];
    }
    for (int i = 1; i <= size; ++i) {
        if (f[i-1] == b[i+1]) return i - 1;
    }

    return -1;
}
int main(){
    vector<int>a={1,7,3,6,5,6};
    pivotIndex(a);
    return 0 ;
}