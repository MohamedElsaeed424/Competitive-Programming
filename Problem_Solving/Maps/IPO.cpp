#include <vector>
#include <unordered_map>
#include <map>
#include <math.h>
#include <unordered_set>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std ;
int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
    int n = profits.size();
    vector<pair<int, int>> projects(n);
    for (int i = 0; i < n; ++i) {
        projects[i] = {capital[i], profits[i]};
    }
    sort(projects.begin(), projects.end());
    priority_queue<int> maxHeap;

    int currentProject = 0;

    for (int i = 0; i < k; ++i) {
        while (currentProject < n && projects[currentProject].first <= w) {
            maxHeap.push(projects[currentProject].second);
            currentProject++;
        }
        if (maxHeap.empty()) {
            break;
        }
        w += maxHeap.top();
        maxHeap.pop();
    }

    return w;
}

//int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
//    unordered_map<int,vector<int>>m ;
//    for(int i =0 ; i<capital.size() ;i++){
//        m[capital[i]].push_back(profits[i]);
//    }
//    int i =0 ;
//    while(i<k && !m.empty()){
//        int maxProf = 0; int c =-1;
//        for(auto p : m){
//            if(p.first <= w){
//                int maxx = *max_element(p.second.begin() ,p.second.end());
//                if (maxx != *p.second.end() && maxx > maxProf){
//                    maxProf = maxx ;
//                    c = p.first ;
//                }
//            }
//        }
//        if(c==-1) break ;
//        w+= maxProf ;
//
//        auto& profitsVec = m[c];
//        profitsVec.erase(std::remove(profitsVec.begin(), profitsVec.end(), maxProf), profitsVec.end());
//
//        if (profitsVec.empty()) {
//            m.erase(c);
//        }
//        i++;
//    }
//    return w ;
//}

int main(){
    vector<int>a={1,2,3};
    vector<int>b={0,1,2};
    findMaximizedCapital(3,0,a,b);
    return 0 ;
}