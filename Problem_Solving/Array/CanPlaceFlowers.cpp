#include <vector>
#include <iostream>

using namespace std ;

bool canPlaceFlowers(vector<int>& flowerbed, int n) {
    if(flowerbed.size()==1 && n==1 && flowerbed[0]==0) return true ;
    if(n>0 && flowerbed[0]==0&& flowerbed[1]==0) {n--; flowerbed[0]=1;}
    for (int i = 1; (i <flowerbed.size()-1 && n>0) ; ++i) {
        if(flowerbed[i-1] ==0 &&flowerbed[i] ==0 &&flowerbed[i+1] ==0) {n--; flowerbed[i]=1;}
    }
    if(n>0 && flowerbed[flowerbed.size()-1]==0&& flowerbed[flowerbed.size()-2]==0) {n--;}
    return n==0 ;
}
