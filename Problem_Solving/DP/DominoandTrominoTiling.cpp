#include <vector>
#include <algorithm>
#include <iostream>
using namespace std ;

int numTilings(int n) {
    const int MOD = 1e9 + 7;
    if(n == 1) return 1 ;
    if(n == 2) return 2;
    if(n == 3) return 5 ;
    int dp[n];
    dp[0] =1 ;dp[1] =2 ;dp[2] =5 ;
    for(int i =3 ; i<n ;i++){
        dp[i] = ((2*dp[i-1]% MOD)+dp[i-3]% MOD)% MOD;
    }
    return dp[n-1];
}

int main(){
    cout << numTilings(4);
    return 0 ;
}