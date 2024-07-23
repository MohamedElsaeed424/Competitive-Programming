#include <vector>
#include <string>
#include <unordered_map>
#include <iostream>

using namespace std;

bool isvowel(char c){
    if(c == 'a' || c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='U'||c=='u'||c=='o'||c=='O') return true;
    return false ;
}
bool halvesAreAlike(string s) {
    int count1 = 0 ;
    for (int i = 0; i < s.size()/2 ; ++i) {
        if(isvowel(s[i]))count1++;
    }
    for (int i = s.size()/2; i < s.size() ; ++i) {
        if(isvowel(s[i]))count1--;
    }
    return count1 == 0;
}