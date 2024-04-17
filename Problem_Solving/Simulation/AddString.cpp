#include <string>
#include <iostream>

using namespace std ;


string addStrings(string num1, string num2) {
    string res;
    int i =num1.size()-1 ;int j =num2.size()-1 ;int c =0;int sum =0;
    while (i>0 || j>0){
        c = sum ;
        sum = (num1[i]-'0') + (num2[j]-'0')+c;
        res = to_string(sum%10) + res; sum = sum /10;
        --i;--j;
    }
    res = to_string(sum)+ res ;
    return res;
}
int main(){
    cout << addStrings("123","56");
    return 0 ;
}