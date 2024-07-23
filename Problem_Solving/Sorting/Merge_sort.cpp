#include <vector>
#include <bits/stdc++.h>
using namespace std ;

void merge(vector<int>&Larr ,vector<int>&Rarr , vector<int>&arr){
    int i = 0, j = 0, k = 0;
    while (i < Larr.size() && j < Rarr.size()) {
        if (Larr[i] <= Rarr[j]) {
            arr[k++] = Larr[i++];
        } else {
            arr[k++] = Rarr[j++];
        }
    }
    while (i < Larr.size()) {
        arr[k++] = Larr[i++];
    }
    while (j < Rarr.size()) {
        arr[k++] = Rarr[j++];
    }
}

void merge_sort(vector<int>&arr) {
    int len = arr.size();
    if(len <= 1) return;
    int mid = len/2;
    vector<int> Larr(arr.begin(), arr.begin() + mid);
    vector<int> Rarr(arr.begin()+mid, arr.end());
    merge_sort(Larr);
    merge_sort(Rarr);
    merge(Larr,Rarr,arr);
}

int main(){
    vector<int>a={5,6,7,8,9,2,5,6,7,0};
    merge_sort(a);
    for(int n : a){
        cout << n << ',' ;
    }
    return 0 ;
}