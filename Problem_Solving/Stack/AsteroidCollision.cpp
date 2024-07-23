#include <iostream>
#include <vector>
#include <stack>
#include <iterator>
#include <algorithm>
#include <string>
#include <map>
#include <iostream>
#include <vector>
#include <math.h>
#include <fstream>
using namespace std ;

using namespace std ;


vector<int> asteroidCollision(vector<int>& asteroids) {
    stack<int> s ;
    for(int i : asteroids){
        if(s.empty() || i >0) s.push(i);
        else if (i<0){
            while(!s.empty()&& s.top()>0 && abs(i)>s.top())
                s.pop();
            if(!s.empty()&&s.top()>0){
                if(s.top() == abs(i))
                    s.pop();
            }else
                s.push(i);
        }
    }
    vector<int>ans(s.size()) ;
    for (int i = ans.size()-1; i >=0; --i) {
        ans[i] = s.top(); s.pop();
    }
    return ans ;
}

int main(){
//    vector<int> a = {10,2,-5};
    vector<int> a = {-2,-2,1,-2};

    asteroidCollision(a);
    return 0 ;
}
