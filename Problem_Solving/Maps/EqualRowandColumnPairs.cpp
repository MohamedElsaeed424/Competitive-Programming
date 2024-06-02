#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <vector>

using namespace std ;

int equalPairs(vector<vector<int>>& grid) {
    unordered_map<int,vector<int>>r ;
    unordered_map<int,vector<int>>c ;
    const int rows = grid.size();
    const int cols = grid[0].size();

    for (int i = 0; i <rows ; ++i) {
        for (int j = 0; j < cols; ++j) {
            r[i].push_back(grid[i][j]);
        }
    }
    for (int i = 0; i <cols ; ++i) {
        for (int j = 0; j < rows; ++j) {
            c[i].push_back(grid[j][i]);
        }
    }
    int count =0 ;
    int f =1 ;
    for(auto p : r){
        for(auto pp :c){
            if(p.second == pp.second) {
                f=1 ;
                break;
            }
        }
        if(f ==1){
            count++;
            f =0 ;
        }
    }
    return count ;
}

int main(){
    vector<vector<int>>a = {{3,2,1},{1,7,6},{2,7,7}};
    cout <<equalPairs(a);
    return 0 ;
}