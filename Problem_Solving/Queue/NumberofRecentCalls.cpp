#include <vector>
#include <map>
using namespace std ;
class RecentCounter {
public:
    map<int,int>map ;
    int i ;
    RecentCounter() {
        i= 0;
    }

    int ping(int t) {
        map[t]=i++;
        int c =0 ;
        for (auto it = map.rbegin(); it != map.rend(); ++it) {
            if((it->first >= t-3000) && (it->first <= t))
                c++;
            else return c;
        }
        return c ;
    }
};

int main(){
    RecentCounter recentCounter = *new RecentCounter();
    recentCounter.ping(1);     // requests = [1], range is [-2999,1], return 1
    recentCounter.ping(100);   // requests = [1, 100], range is [-2900,100], return 2
    recentCounter.ping(3001);  // requests = [1, 100, 3001], range is [1,3001], return 3
    recentCounter.ping(3002);  // requests = [1, 100, 3001, 3002], range is [2,3002], return 3
    return 0 ;
}