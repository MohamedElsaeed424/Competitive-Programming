#include <string>
#include <unordered_map>
#include <unordered_set>

using namespace std ;

int lengthOfLongestSubstring(string s) {
    if(s.size()==1) return 1 ;
    unordered_set<char>m; int maxx =0 ; int n =0 ;
    for (int i = 0; i < s.size() ; ++i) {
        if(n > maxx) maxx = n;
        n =0 ;
        m ={};
        for (int j = i; j < s.size() ; ++j) {
            if(m.find(s[j])==m.end()){
                m.insert(s[j]); n++;
            }else{
                break;
            }
        }
    }
    if(n >maxx) maxx =n ;
    return maxx ;
}

int main(){
    string s = "au" ;
    lengthOfLongestSubstring(s);
    return 0 ;
}