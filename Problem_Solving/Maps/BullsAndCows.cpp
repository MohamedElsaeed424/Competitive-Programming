#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <unordered_set>
#include <unordered_map>
using namespace std ;

string getHint(string secret, string guess) {
    unordered_map<char,int>secretMap ;
    unordered_set<int>samIDxset ;
    int b =0 ;
    int c =0 ;
    for(int i =0 ; i<secret.size() ; i++){ // for Bulls
        if (secret[i]==guess[i]){
            b++ ;
            samIDxset.insert(i);
        }else if(secretMap.count(secret[i])){
            secretMap.insert({secret[i] ,secretMap[secret[i]]++ });
        }else {
            secretMap.insert({secret[i] ,1});
        }
    }
    for (int i = 0; i <guess.size() ; ++i) {
        if(secretMap.count(guess[i]) &&(!samIDxset.count(i))){
            if (secretMap[guess[i]]>1){
                --secretMap[guess[i]] ;
            }else{
                secretMap.erase(guess[i]);
            }
            c++ ;
        }
    }
    return to_string(b)+"A"+to_string(c)+"B" ;
}

void main(){
    string s = "1123" ;
    string g = "0111";
    cout << getHint(s,g);
    return 0 ;
}