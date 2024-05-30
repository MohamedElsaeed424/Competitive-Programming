#include <iostream>
#include <vector>
#include <map>

using namespace std ;

int hIndex(vector<int>& citations) {
    map<int,int>map ;
    for (int i = 0; i <citations.size() ; ++i) map[citations[i]]++;
    int c =0 ;
    for(auto pair : map){
        for (int i = 0; i < pair.second; ++i) {
            citations[c++]=pair.first;
        }
    }
    int max = 0;
    for (int i = 0; i < citations.size(); ++i) {
        if(citations[i] >= citations.size()-i&& citations.size()-i>max)
            max = (citations[i] >= citations.size()-i)?
                    citations.size()-i: citations[i];
    }
    return max ;
}

int main(){
    vector<int>a = {1,1,3};
    cout << hIndex(a);
    return 0 ;
}