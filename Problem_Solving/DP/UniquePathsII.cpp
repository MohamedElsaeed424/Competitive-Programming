#include <vector>
#include <iostream>
#include <unordered_map>

using namespace std ;

int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
    int m = obstacleGrid.size() ; int n = obstacleGrid[0].size();
    if(obstacleGrid[m-1][n-1] ==1)return 0 ;
    if(m ==1 && n ==1) return 1 ;
    unordered_map<int,int>obstacles ;
    for (int i = 0; i < m ; ++i) {
        for (int j = 0; j < n; ++j) {
            if (obstacleGrid[i][j] ==1)
                obstacles[i]=j ;
        }
    }
    for (int j = 1; j < n; ++j) {
        obstacleGrid[0][j] = 1 ;
    }
    for (int i = 1; i < m; ++i) {
        obstacleGrid[i][0] = 1 ;
    }
    for (int i = 1; i < m; ++i) {
        for (int j = 1; j <n ; ++j) {
            if(!obstacles.count(i) || obstacles[i]!=j){
                int x = (!obstacles.count(i-1) || obstacles[i-1]!=j) ? obstacleGrid[i-1][j]: 0;
                int y = (!obstacles.count(i) || obstacles[i]!=j-1) ? obstacleGrid[i][j-1]: 0;
                obstacleGrid[i][j] = x+ y;
            }
        }
    }
    // the output
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j <n ; ++j) {
            cout << obstacleGrid[i][j] <<',' ;
        }
        cout << "\n";
    }
    return obstacleGrid[m-1][n-1];
}


int main(){
//    vector<vector<int>>a = {{0,0,0},{0,1,0},{0,0,0}};
//    vector<vector<int>>a = {{0,1},{0,0}};
//    vector<vector<int>>a = {{0,0},{0,1}};
    vector<vector<int>>a = {{0}};
    cout << uniquePathsWithObstacles(a) ;
    return 0 ;
}