#include <string>
#include <iostream>

using namespace std ;


bool isPalindrome(string s) {
    if (s.size() ==0)return true ;
    int st = 0 ; int en = s.size()-1 ;
    while(st <=en){
        char stc = (char)tolower(s[st]) ; char enc = (char)tolower(s[en]);
        if (!(stc >= '0' && stc <= '9') && !(stc >= 'a' && stc <= 'z')){st++; continue;}
        if (!(enc >= '0' && enc <= '9') && !(enc >= 'a' && enc <= 'z')){en--;continue;}
        if(stc != enc) return false ;
        st++;en--;
    }
    return true ;
}

void main(){
//    cout << isPalindrome("A man, a plan, a canal: panama")<<endl;
    cout << (int)'9' <<endl;
    cout << isPalindrome("0P");
    return 0 ;
}