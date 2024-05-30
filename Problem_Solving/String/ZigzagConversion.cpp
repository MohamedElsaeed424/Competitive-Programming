#include <string>
#include <iostream>
#include <cstring>
// not solved yet
using namespace std ;


string convert(string s, int numRows) {
    string ans ;
    for (int i = 0; i <s.size() ; i+=numRows+1) ans+=s[i];
    for (int i = 1; i <s.size() ; i+=2) ans+=s[i];
    for (int i = 2; i <s.size() ; i+=numRows+1) ans+=s[i];
    return ans ;
}
// ans PAHNAPLSIIGYIR
int main(){
    string s = "PAYP";
    string ans = convert(s,3);
    cout << ans << endl;
    return 0 ;
}