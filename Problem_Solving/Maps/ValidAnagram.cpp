#include <iostream>
#include <vector>
#include <map>

using namespace std ;

//bool isAnagram(string s, string t) {
//    int a1[26];
//    for(auto c: s){
//        a1[c-'a']++;
//    }
//    for(auto c: t){
//        a1[c-'a']--;
//    }
//    for(auto i=0; i<26; i++){
//        if(a1[i] != 0){
//            return false;
//        }
//    }
//    return true;
//
//}


//                                  Another Solution
bool isAnagram(string s, string t) {
    if(s.size() != t.size())
        return false ;
    map<char,int>ms ; map<char,int>mt;
    for (int i = 0; i < s.size(); ++i) {
        ms[s[i]]++;mt[t[i]]++;
    }
    if(ms.size() != mt.size())
        return false ;
    auto itr1 = ms.begin(); auto itr2 =mt.begin();
    while(itr1 != ms.end()){
        if ((itr1->first != itr2->first) ||(itr1->second !=itr2->second))
            return false ;
        itr1++;
        itr2++;
    }
    return true ;
}

int main(){
    string s ="rat" ; string t = "car";
    cout << isAnagram(s,t);
    return 0 ;
}