#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>

using namespace std ;

bool closeStrings(string word1, string word2) {
    vector<int>v(26,0);
    vector<int>vv(26,0);
    for (int i = 0; i <word1.size() ||i <word2.size()  ; ++i) {
        if(i<word1.size()) v[word1[i]-'a']++;
        if(i<word2.size()) vv[word2[i]-'a']++;
    }
    for(int i =0  ;i < 26 ; i++){
        if(v[i]==0 && vv[i]!=0 || v[i]!=0 && vv[i]==0) return false ;
    }
    sort(v.begin(),v.end());
    sort(vv.begin(),vv.end());
    for (int i = 0; i < 26; ++i) {
        if(v[i]!=vv[i]) return false ;
    }
    return true ;
}