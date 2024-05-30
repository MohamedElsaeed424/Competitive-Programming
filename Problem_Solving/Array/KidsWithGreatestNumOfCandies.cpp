#include <vector>
#include <algorithm>

using namespace std ;


vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    int maxx = *max_element(candies.begin() , candies.end());
    vector<bool>ans ;
    for (int i = 0; i <candies.size() ; ++i) {
        if(candies[i]+extraCandies >= maxx) ans.push_back(1);
        else ans.push_back(0);
    }
    return ans ;
}