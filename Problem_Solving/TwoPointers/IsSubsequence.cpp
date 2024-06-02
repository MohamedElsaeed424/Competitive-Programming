#include <vector>
#include <string>
#include <unordered_map>
#include <iostream>
using namespace std ;
bool isSubsequence(string s, string t) {
    if(t.empty() && s.empty()) return true ;
    if(s.empty() && !t.empty()) return true ;
    int i =0 ; int j =0 ;
    while(j < t.size()){
        if(s[i] == t[j]) ++i;
        if(i == s.size())return true ;
        ++j;
    }
    return i== s.size() ;
}