#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <algorithm>
#include <numeric>

using namespace std ;

int getMaximumConsecutive(vector<int>& coins) {
    int maxx = 1;
    sort(coins.begin(), coins.end());
    for (int n: coins) {
        if (n > maxx)break;
        maxx += n;
    }
    return maxx;
}
int main(){
    vector<int>a={1,1,1,4};
    getMaximumConsecutive(a);
    return 0 ;
}