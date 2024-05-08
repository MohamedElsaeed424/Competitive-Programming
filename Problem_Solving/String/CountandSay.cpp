#include <string>
#include <iostream>
using namespace std ;

string helper(string s){
    if(s=="1") return "11";
    int count =1 ; string ans ="";
    for (int i = 0; i < s.size()-1; ++i) {
        if(s[i]!= s[i+1]){
            ans+=to_string(count)+s[i]; count =1 ;
        }else count++ ;
    }
    if(s[s.size()-1] != s[s.size()-2])
        count = 1;
    ans += to_string(count) +s[s.size() - 1];
    return ans ;
}

string countAndSay(int n) {
    string s ="1" ;
    if (n ==1 ) return s;
    for (int i = 1; i < n ; ++i) {
        s = helper(s);
    }
    return s ;
}

int main(){
    int n = 2 ;
    cout << countAndSay(n);
    return 0 ;
}