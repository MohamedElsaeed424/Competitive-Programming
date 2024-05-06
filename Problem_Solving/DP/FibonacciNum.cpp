#include <iostream>
#include <vector>

using namespace std ;

int fib(int n) {
    vector<int> v  ;
    if (n ==0 || n ==1)
        return n ;
    v.push_back(0);
    v.push_back(1);
    for (int i = 2; i <= n ; ++i) {
        v.push_back(v[i-1]+v[i-2]);
    }
    return v.back() ;
}

void main(){
    cout << fib(3);
    return 0 ;
}