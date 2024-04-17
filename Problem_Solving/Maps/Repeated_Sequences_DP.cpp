#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std ;

vector<string> findRepeatedDnaSequences(string s) {
    unordered_map<string , int>map ;
    vector<string>ans ;
    cout << s.size() ;
    if (s.size() < 10){
        return ans ;
    }
    map.insert({s.substr(0,10) ,1}) ;// put first 10 chars in the map
    for (int i = 1; i <= s.size()-10; ++i) {
        if(map.find(s.substr(i , 10))!= map.end()){
            map[s.substr(i , 10)] +=1 ;
        }else{
            map.insert({s.substr(i,10) ,1}) ;
        }
    }
    for (auto i = map.begin(); i != map.end(); i++){
        if (i->second > 1){
            ans.push_back(i->first);
        }
    }
    return ans ;
}

int main(){
    string s = "AAAAAAAAAAA" ;
    vector<string> arr = findRepeatedDnaSequences(s);
    for (int i = 0; i < arr.size(); ++i) {
        cout << arr[i]<<",";
    }
}
