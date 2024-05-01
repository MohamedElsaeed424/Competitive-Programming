// not solved yet
#include <string>
#include <iostream>
#include <vector>
#include <map>
#include <utility>


using namespace std ;
string longestCommonPrefix(vector<string>& strs) {
    if(strs.size() == 1) return strs[0];
    string ans;
    for (int i = 0; i < strs[0].size(); ++i) {
        for (int j = 1; j <strs.size() ; ++j) {
            if(strs[0][i] != strs[j][i]){return ans ;}
        }
        ans+=strs[0][i];
    }
    return ans ;
}
// OR (not better solution)
string longestCommonPrefix2(vector<string>& strs) {
    if(strs.size() == 1) return strs[0];
    string ans;
    for (int i = 0; i < strs[i].size(); ++i) {
        char c = strs[0][i] ; int f =1 ;
        for (int j = 1; j <strs.size() ; ++j) {
            if(strs[j][i] != c){f =0 ; break ;}
        }
        if(f){ans+=c;f =1;}else{ break;}
    }
    return ans ;
}

int main(){
    vector<string > a ={"flower","flow","flight"} ;
    cout << longestCommonPrefix(a);
}