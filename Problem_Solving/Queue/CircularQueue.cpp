#include <queue>
#include <iostream>
using namespace std ;
class MyCircularQueue {
public:
    queue<int>q ;
    int size  ;
    MyCircularQueue(int k) {
        size = k ;
    }

    bool enQueue(int value) {
        if(q.size()<size){
            q.push(value);
            return true;
        }
        return false ;
    }

    bool deQueue() {
        if(!q.empty()){
            q.pop();
            return true ;
        }
        return false;
    }

    int Front() {
        if (!q.empty()){
            return q.front();
        }
        return -1 ;
    }

    int Rear() {
        if (!q.empty()){
            return q.back();
        }
        return -1 ;
    }

    bool isEmpty() {
        return q.empty() ;
    }

    bool isFull() {
        return q.size() == size ;
    }
};

int main(){
    MyCircularQueue q = *new MyCircularQueue(3);
    cout << q.enQueue(1) << endl ;
    cout << q.enQueue(2)<< endl ;
    cout << q.enQueue(3)<< endl ;
    cout << q.enQueue(4)<< endl ;
    cout << q.Rear()<< endl ;
    cout << q.isFull()<< endl ;
    cout << q.deQueue()<< endl ;
    cout << q.enQueue(4)<< endl ;
    cout << q.Rear();

    return 0 ;
}
