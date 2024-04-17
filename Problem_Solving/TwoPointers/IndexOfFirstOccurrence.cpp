#include <string>
#include <iostream>

using namespace std ;
int strStr(string haystack, string needle) {
    if(haystack.size() < needle.size()) return -1 ;
    int found =0 ;
    for (int i = 0; i < (haystack.size()-needle.size())+1; ++i) {
        int k =0 ;
        for (int j = i; j < i+needle.size(); ++j) {
            char c = haystack[j];
            char c1 = needle[k];
            if (haystack[j] != needle[k]) break;
            if(k == needle.size()-1) found =1 ;
            k++;
        }
        if (found) return i ;
    }
    return -1;
}

// not correct but just an Idea ;)
//int strStr(string haystack, string needle) {
//    int i =0 ; int j =0 ; int ans = -1 ;int k =0 ;
//    while(i<haystack.size()+1){
//        if(j == needle.size()){
//            return ans-needle.size();
//        }else if(haystack[i]==needle[j]){
//            i++; j++; ans=i;
//        }else { // !=
//            j =0 ; i++;
//        }
//    }
//    return -1;
//}
int main(){
    cout << strStr("a","a");
    return 0 ;
}