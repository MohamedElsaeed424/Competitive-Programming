#include  <queue>
#include <iostream>
#include <unordered_map>

using  namespace std ;

int firstUniqChar(string s) {
    unordered_map<char ,int>map ;
    for (int i = 0; i < s.size(); ++i) {
        map[s[i]]++;
    }
    for (int i = 0; i <s.size(); ++i) {
        if(map[s[i]] == 1) return i ;
    }
    return -1 ;
}

void main(){
    cout << firstUniqChar("aadadaad") ;
    return 0 ;
}