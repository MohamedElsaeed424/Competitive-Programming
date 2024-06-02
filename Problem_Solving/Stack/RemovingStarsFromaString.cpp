#include <iostream>
#include <vector>
#include <stack>
#include <iterator>
#include <algorithm>
using namespace std ;

string removeStars(string s) {
    string ans ;
    for(char c : s){
        if(c == '*') ans.pop_back();
        else ans +=c ;
    }
    return ans ;
}

int main(){
    string s="leet**cod*e";
    cout << removeStars(s);
    return 0 ;
}