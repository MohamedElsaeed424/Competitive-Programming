#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <algorithm>
#include <numeric>

using namespace std ;

int minimumArea(vector<vector<int>>& grid) {
    int min_row = grid.size(), max_row = -1;
    int min_col = grid[0].size(), max_col = -1;

    for (int i = 0; i < grid.size(); ++i) {
        for (int j = 0; j < grid[i].size(); ++j) {
            if (grid[i][j] == 1) {
                if (i < min_row) min_row = i;
                if (i > max_row) max_row = i;
                if (j < min_col) min_col = j;
                if (j > max_col) max_col = j;
            }
        }

    }

    if (max_row == -1 || max_col == -1) {
        // No 1s in the grid
        return 0;
    }

    return (max_row - min_row + 1) * (max_col - min_col + 1);
}


int main(){

    vector<vector<int>>a ={{0,1,0},{1,0,1}};
    minimumArea(a);
}

