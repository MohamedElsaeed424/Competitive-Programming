#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <map>
#include <unordered_set>

using namespace std ;



/** saving the whole vector as key in map **/
int equalPairs(vector<vector<int>>& grid) {
    // put each row in an unordered_map with its count
    int total {};
    map<vector<int>, int> mp;
    for (int i = 0 ; i < grid.size(); ++i) {
        mp[grid[i]]++;
    }
    // go through each column and see if its in mp. Then multiply by the index
    for (int i = 0; i < grid.size(); ++i) {
        std::vector<int> col;
        for (int j = 0; j < grid.size(); ++j) {
            col.push_back(grid[j][i]);
        }
        if (mp.count(col) > 0) {
            total = total + mp[col];
        }
    }

    return total;
}