// still not solved
#include <string>
#include <map>
#include <vector>
#include <iostream>
#include <unordered_set>
using namespace std ;
class LRUCache {
public:
    map<int,int>map;
    unordered_set<int>leastRecently;
    int size ;
    LRUCache(int capacity) {
        size =capacity ;
    }
    int get(int key) {
        if(map.count(key)){
            leastRecently.erase(key);
            leastRecently.insert(key);
            return map[key];
        }
        return -1 ;
    }

    void put(int key, int value) {
        if (map.size() == size) {
            int lruKey = *(leastRecently.begin());
            map.erase(lruKey);
            leastRecently.erase(leastRecently.begin());
        }
        map[key] = value;
        leastRecently.erase(key);
        leastRecently.insert(key);
    }
};

int main(){
    LRUCache lRUCache = *new LRUCache(2);
    lRUCache.put(2, 1);
    lRUCache.put(2, 2);
    cout << lRUCache.get(2)<<endl;
    lRUCache.put(1, 1);
    lRUCache.put(4, 1);
//    cout << lRUCache.get(1)<<endl;
    cout<< lRUCache.get(2)<<endl;
//    LRUCache lRUCache = *new LRUCache(2);
//    lRUCache.put(1, 1); // cache is {1=1}
//    lRUCache.put(2, 2); // cache is {1=1, 2=2}
//    lRUCache.get(1);    // return 1
//    lRUCache.put(3, 3); // LRU key was 2, evicts key 2, cache is {1=1, 3=3}
//    lRUCache.get(2);    // returns -1 (not found)
//    lRUCache.put(4, 4); // LRU key was 1, evicts key 1, cache is {4=4, 3=3}
//    lRUCache.get(1);    // return -1 (not found)
//    lRUCache.get(3);    // return 3
//    lRUCache.get(4);    // return 4

    return 0 ;
}