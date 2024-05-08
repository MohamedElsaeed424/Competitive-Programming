#include <vector>
#include <limits.h>
#include <iostream>
using namespace std ;
// Not solved yet

/**
 * 1
 * 3 4
 * 6 5 7
 * 4 1 8 3
 */
int minimumTotal1(vector<vector<int>>& triangle) {
    int sum = 0 ; int j =0 ;
    sum+=triangle[0][0];
    for (int i = 0; i < triangle.size()-1; ++i) {
        j= triangle[i+1][j] < triangle[i+1][j+1]? j :j+1 ;
        sum+=triangle[i+1][j];
    }
    return sum ;
}
int minimumTotal(vector<vector<int>>& triangle) {
    if (triangle.size() == 1) return triangle[0][0];
    int n = (triangle.size()-1)*2 ; int j =2 ;
    int dp[n];
    dp[0]= triangle[0][0]+triangle[1][0];
    dp[1]= triangle[0][0]+triangle[1][1];
    for (int i = 1; i <triangle.size()-1; ++i) {
        cout << dp[j-2] <<","<<triangle[i+1][i-1]<<","<<triangle[i+1][i]<<endl;
        cout << dp[j-1] <<","<<triangle[i+1][i]<<","<<triangle[i+1][i+1]<<endl;
        dp[j]=min((dp[j-2]+triangle[i+1][i-1]),(dp[j-2]+triangle[i+1][i]));j++;
        dp[j]=min((dp[j-2]+triangle[i+1][i]),(dp[j-2]+triangle[i+1][i+1]));j++;
    }
    return min(dp[n-1],dp[n-2]);
}

int main(){
//    vector<vector<int>>a = {{-1},{2,3},{1,-1,-3}};
    vector<vector<int>>a = {{2},{3,4},{6,5,9},{4,4,8,0}};
//    vector<vector<int>>a = {{-1},{-2,-3}};
    cout << minimumTotal(a);
    return 0;
}