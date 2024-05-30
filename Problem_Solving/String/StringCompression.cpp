#include <string>
#include <iostream>
#include <vector>

using namespace std ;

int compress(vector<char>& chars) {
    int count =1 ; vector<char>ans2 ;
    for (int i = 0; i < chars.size()-1; ++i) {
        if(chars[i] == chars[i+1]) count++;
        else{
            ans2.push_back(chars[i]);
            if(count != 1){
                string s = to_string(count);
                for(char n : s){
                    ans2.push_back(n);
                }
            }
            count =1 ;
        }
    }
    ans2.push_back(chars[chars.size()-1]);
    if(count != 1){
        string s = to_string(count);
        for(char n : s){
            ans2.push_back(n);
        }
    }
    chars = ans2 ;
    return ans2.size() ;
}


int main(){
    vector<char>a = {'a','a','b','b','c','c','c'};
   cout << compress(a);

}