#include <vector>
#include <iostream>
using namespace std ;
class ProductOfNumbers {
public:
    vector<int>v ;
    ProductOfNumbers() {
        v ={};
    }

    void add(int num) {
        v.push_back(num);
    }

    int getProduct(int k) {
        int c  =0 ,ans =1;
        for (int i = v.size()-1; c<k; --i) {
            ans*=v[i];
            c++;
        }
        return ans ;
    }

    void toString(){
        for (int i = 0; i < v.size(); ++i) {
            cout << v[i]<<',';
        }
        cout << endl;
    }
};
int main(){
    ProductOfNumbers productOfNumbers ;
     productOfNumbers.add(3);         // [3]
     productOfNumbers.add(0);         // [3,0]
     productOfNumbers.add(2);         // [3,0,2]
     productOfNumbers.add(5);         // [3,0,2,5]
     productOfNumbers.add(4);         // [3,0,2,5,4]
     productOfNumbers.toString();
    cout << productOfNumbers.getProduct(2)<<endl;    // return 20.
    cout << productOfNumbers.getProduct(3)<<endl;    // return 40.
    cout << productOfNumbers.getProduct(4)<<endl;    // return 0.
    productOfNumbers.add(8);         // [3,0,2,5,4,8]
    cout << productOfNumbers.getProduct(2)<<endl;    // return 32.
    return 0 ;
}
