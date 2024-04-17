#include <iostream>
#include <vector>

using namespace std ;

int tribonacci(int n) {
    vector<int> v  ;
    if (n ==0 )
        return n ;
    if(n ==1 || n==2)
        return 1 ;
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    for (int i = 3; i <= n ; ++i) {
        v.push_back(v[i-1]+v[i-2]+v[i-3]);
    }
    return v.back() ;
}

int main(){
    cout << tribonacci(25);
    return 0 ;
}