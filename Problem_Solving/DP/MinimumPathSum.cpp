#include <vector>
#include <climits>
#include <iostream>
using namespace std ;

int minPathSum(vector<vector<int>>& grid) {
    int ROW = grid.size() ; int COL = grid[0].size() ;
    vector<vector<int>> dp(ROW + 1, vector<int>(COL + 1, INT_MAX));
    dp[ROW][COL-1] =0 ;
    for (int i = ROW-1; i >=0 ; --i) {
        for (int j = COL-1; j >=0 ; --j) {
            dp[i][j] = min(dp[i+1][j] , dp[i][j+1])+grid[i][j];
        }
    }
    return dp[0][0];
}

int main(){
    vector<vector<int>>a ={{1,2},{5,6},{1,1}} ;
    cout << minPathSum(a);
    return 0 ;
}
