#include <vector>
#include <iostream>

using namespace std ;


int uniquePaths(int m, int n) {
    if (m ==1 || n==1) return 1 ; // if one row or one col
    int dp [m][n];
    for (int j = 1; j < n; ++j) {
        dp[0][j] = 1 ;
    }
    for (int i = 0; i < m; ++i) {
        dp[i][0] = 1 ;
    }
    dp[0][0]=0;
    for (int i = 1; i < m; ++i) {
        for (int j = 1; j <n ; ++j) {
            dp[i][j] = dp[i-1][j]+dp[i][j-1];
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
    cout << uniquePaths(3,2);
    return 0 ;
}