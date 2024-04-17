#include <unordered_map>
#include <iostream>
#include <cstdlib> // For rand()

using namespace std;
class RandomizedSet {
public:
    unordered_map<int, int> map;
    static int i;

    RandomizedSet() {
        i = 0;
    }

    bool insert(int val) {
        if (map.count(val)) {
            return false;
        }
        map.insert({val ,i});
        ++i;
        return true;
    }

    bool remove(int val) {
        if (map.count(val)) {
            map.erase(val);
            return true;
        }
        return false;
    }

    int getRandom() {
        int ran = rand() % map.size();
        auto it = map.begin();
        advance(it, ran);
        return it->first;
    }
};

int RandomizedSet::i = 0;


int main() {
    RandomizedSet r;
    cout << r.insert(1) << endl;
    cout << r.remove(2) << endl;
    cout << r.insert(2) << endl;
    cout << r.getRandom() << endl;
    cout << r.remove(1) << endl;
    cout << r.insert(2) << endl;
    cout << r.getRandom() << endl;

    return 0;
}
