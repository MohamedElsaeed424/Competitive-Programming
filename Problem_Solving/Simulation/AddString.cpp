#include <string>
#include <iostream>

using namespace std ;


string addStrings(string num1, string num2) {
    string res;
    int i =num1.size()-1 ;int j =num2.size()-1 ;int c =0;int sum =0;
    while (i>=0 || j>=0){
        c = sum ;
        if(j<0){
            sum = (num1[i]-'0')+c ;
        }else if(i<0){
            sum =(num2[j]-'0')+c;
        }else{
            sum = (num1[i]-'0') + (num2[j]-'0')+c;
        }
        res = to_string(sum%10) + res; sum = sum /10;
        --i;--j;
    }
    if(sum > 0){
        res = to_string(sum)+ res ;
    }
    return res;
}
void main(){
    cout << addStrings("1999","1");
    return 0 ;
}