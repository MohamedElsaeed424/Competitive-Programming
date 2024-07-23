#include <string>
#include <map>
#include <iostream>
#include <vector>
#include <math.h>
#include <fstream>
using namespace std ;
int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
    int n = customers.size();
    int total_satisfied = 0;
    int s = 0, maxx = 0, tot = 0;

    // Calculate always satisfied customers and initial window
    for (int i = 0; i < n; ++i) {
        if (grumpy[i] == 0) {
            total_satisfied += customers[i];
        }
        if (i < minutes) {
            tot += grumpy[i] == 1 ? customers[i] : 0;
        }
    }
    maxx = tot;

    // Slide the window across the rest of the array
    for (int i = 1; i <= n - minutes; ++i) {
        if (grumpy[i - 1] == 1) {
            tot -= customers[i - 1];
        }
        if (grumpy[i + minutes - 1] == 1) {
            tot += customers[i + minutes - 1];
        }
        if (tot > maxx) {
            s = i;
            maxx = tot;
        }
    }


    for (int i = s; i < s + minutes && i < n; ++i) {
        if (grumpy[i] == 1) {
            total_satisfied += customers[i];
        }
    }

    return total_satisfied;
}

int main(){

    vector<int>a={1,0,1,2,1,1,7,5};
    vector<int>b={0,1,0,1,0,1,0,1};
    int n = 3;
    maxSatisfied(a,b,n);
    return 0 ;
}