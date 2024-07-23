#include <string>
#include <unordered_map>
#include <unordered_set>

using namespace std ;

int longestPalindrome(string s) {
    int len =0 ;
    unordered_map<char,int>m ;
    for(char c : s){
        m[c]++;
    }
    int f =0 ;
    for(auto p : m){
        if(p.second%2 ==0) len+=p.second;
        else {
            len+=p.second-1;
            f =1 ;
        }
    }
    if(len%2 ==0&& f ==1) len++;
    return len ;
}