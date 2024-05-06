#include <vector>
#include <iostream>
#include <unordered_map>

using namespace std ;

int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
    int m = obstacleGrid.size() ; int n = obstacleGrid[0].size();
    if(obstacleGrid[m-1][n-1] ==1)return 0 ;
    if(m ==1 && n ==1) return 1 ;
    int dp [m][n];
    // initialize first row
    for (int j = 0; j < n; ++j) {
        if (obstacleGrid[0][j] == 1 ){
            for (int i = j; i < n; ++i) {
                dp[0][i] = 0 ;
            }
            break;
        }
        dp[0][j] = 1 ;
    }
    //initialize first col
    for (int i = 0; i < m; ++i) {
        if(obstacleGrid[i][0]==1){
            for (int j = i; j < m; ++j) {
                dp[j][0] = 0 ;
            }
            break;
        }
        dp[i][0] = 1 ;
    }
    for (int i = 1; i < m; ++i) {
        for (int j = 1; j <n ; ++j) {
            if(obstacleGrid[i][j]!=1){
                int x = (obstacleGrid[i-1][j]!=1) ? dp[i-1][j]: 0;
                int y = (obstacleGrid[i][j-1]!=1) ? dp[i][j-1]: 0;
                dp[i][j] = x+ y;
            }else{
                dp[i][j]=0;
            }
        }
    }
    // the output
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j <n ; ++j) {
            cout << dp[i][j] <<',' ;
        }
        cout << "\n";
    }
    return dp[m-1][n-1];
}


int main(){
    vector<vector<int>>a = {{0,0,0},{0,1,0},{0,0,0}};
//    vector<vector<int>>a = {{0,1},{0,0}};
//    vector<vector<int>>a = {{0,0},{0,1}};
//    vector<vector<int>>a = {{1,0}};
//    vector<vector<int>>a = {{0}};
    cout <<uniquePathsWithObstacles(a) << " <- ans" ;
    return 0 ;
}