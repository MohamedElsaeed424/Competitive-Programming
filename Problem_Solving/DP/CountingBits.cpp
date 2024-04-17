#include <iostream>
#include <vector>
#include <math.h>


using namespace std ;

vector<int> countBits(int n) {
    vector<int>ans  ;
    ans.push_back(0);
    if(n ==0 )
        return ans ;
    ans.push_back(1);
    for (int i = 2; i < n+1; ++i) {
        int nomOfbits = log2(i);
        ans.push_back(ans[i-((int)pow(2,nomOfbits))]+1);
    }
    return ans ;
}

int main(){
    vector<int>a = countBits(5);
    for (int i = 0; i < a.size(); ++i) {
        cout << a[i] << ',';
    }
    return 0 ;
}