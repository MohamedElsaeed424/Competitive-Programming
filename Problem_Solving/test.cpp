#include <string>
#include <map>
#include <iostream>
#include <vector>
#include <math.h>
#include <fstream>
using namespace std ;

int main(){
    string s = "f05d0fe26079be0feb553daa97752725060848e946b1c27c296097b736b73453";
    string m = "f05d0fe26079be0feb553daa97752725060848e946b1c27c296097b736b73453";
    for (int i = 0; i < s.length(); ++i) {
        if(s[i]!=m[i]) {cout<< "false";return 0;}
    }
    cout << "true";
    return 0 ;
}

static const int __ = []() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    return 0;
}();

//map<char, int> charPositions(const string& s) {
//    map<char, int> charMap;
//    for (int i = 0; i < s.size(); ++i) {
//        charMap[s[i]] = i;
//    }
//    return charMap;
//}

//int main() {
//    string s = "example";
//    map<char, int> charMap = charPositions(s);
//
//    // Print characters along with their positions
//    for (auto it = charMap.begin(); it != charMap.end(); ++it) {
//        cout << it->first << ": " << it->second << endl;
//    }
//
//    return 0;
//}

//int main(){
//    // 0 1 10 11 ,  100 101 110 111 , 1000 1
//    int in ;
//    cin >>in ;
//    if (in <10){
//        cout << in << endl ;
//        for (int i = 0; i < in ; ++i) {
//            cout << 1<<" ";
//        }
//    }else{
//        int tmpIn = in ;
//
//        int lastdigitIn =0 ;
//        int sizeOfIn =0 ;
//        int sizeOfRemIn =0 ;
//        bool allIsGood = true ;
//        int sumSoFar =0 ;
//        vector<int>ans ;
//        while (tmpIn >0){
//            lastdigitIn = tmpIn%10 ;
//            sizeOfIn++;
//            if( (tmpIn%10 != 0 && tmpIn%10 !=1 )&& (allIsGood) ) allIsGood = false ;
//            tmpIn = tmpIn /10 ;
//        }
//        int remIn = in%10*sizeOfIn ;
//        int tmpRemIn = remIn ;
//        if(allIsGood) { cout << 1 <<endl << in<<endl;return 0 ;} // if num is already good
//        while (tmpRemIn >0){
//            sizeOfRemIn++;
//            tmpRemIn = tmpRemIn /10 ;
//        }
//        for (int i = 0; i < lastdigitIn; ++i) {
//            ans.push_back(pow(10,sizeOfIn-1));
//        }
//        if(remIn <10){
//            for (int i = 0; i < ans.size(); ++i) {
//                ans[i]+=1 ;
//            }
//            if (ans.size() < remIn) {// 34
//                ans.push_back(1); // [10,10,10] -> [11,11,11,1]
//            }
//        }else{
//            int currten =1 ;
//            while(remIn){
//                int cur = remIn%10 ;
//                for (int i = 0; i < cur; ++i) {
//                       ans[i]+=1*currten ;
//                }
//                currten *=10 ;
//                remIn=remIn/10 ;
//            }
//        }
//        cout << ans.size() << endl;
//        for (int i = 0; i < ans.size(); ++i) {
//            sumSoFar+=ans[i];
//            cout << ans[i] <<" ";
//        }
//
//        cout << endl <<sumSoFar ;
//    }
//
//
//
//    return 0;
//}

//int main() {
//    ifstream infile("input.txt");
//    ofstream outfile("output.txt");
//
//    int T;
//    infile >> T;
//
//    while (T--) {
//        int R, C, D, NR, NC, ND, PR, PC, PD, N;
//        infile >> R >> C >> D >> NR >> NC >> ND >> PR >> PC >> PD >> N;
//
//        // Calculate the maximum number of machines based on the budget
//        int maxMachines = min(min(N / PR, N / PC), N / PD);
//
//        // Calculate the maximum number of machines based on the cluster's capacity
//        int maxMachinesCapacity = min(min(NR / R, NC / C), ND / D);
//
//        // Calculate the maximum number of machines based on resource availability
//        int maxMachinesResource = N / (PR * R + PC * C + PD * D);
//
//        // Output the minimum of the two maximums as Sayed can't exceed the capacity of the cluster
//        outfile << min(maxMachines, min(maxMachinesCapacity, maxMachinesResource)) << endl;
//    }
//
//    infile.close();
//    outfile.close();
//    return 0;
//}