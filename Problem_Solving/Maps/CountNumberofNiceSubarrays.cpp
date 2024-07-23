#include <vector>
#include <set>
#include <iostream>
using namespace std;

#include <vector>
#include <unordered_map>
using namespace std;

int numberOfSubarrays(vector<int>& nums, int k) {
    unordered_map<int, int> countMap;
    countMap[0] = 1; // Initialize with 0 count to handle cases where we find a nice subarray from the beginning
    int oddCount = 0;
    int result = 0;

    for (int num : nums) {
        if (num % 2 != 0) {
            oddCount++;
        }

        if (countMap.find(oddCount - k) != countMap.end()) {
            result += countMap[oddCount - k];
        }

        countMap[oddCount]++;
    }

    return result;
}

//int numberOfSubarrays(vector<int>& nums, int k) {
//    set<vector<int>> s;
//    vector<int> a;
//    int n = nums.size();
//    int count = 0;
//    int j = 0;
//    int result = 0;
//
//    // Initial window setup to find the first subarray with k odd numbers
//    while (j < n && count < k) {
//        a.push_back(nums[j]);
//        if (nums[j] % 2 != 0) {
//            count++;
//        }
//        j++;
//    }
//
//    if (count == k) {
//        s.insert(a);
//        result++;
//    }
//
//    // Sliding window
//    for (int i = 0; j < n; ++i) {
//        if (i > 0) {
//            a.erase(a.begin());
//            if (nums[i - 1] % 2 != 0) {
//                count--;
//            }
//        }
//
//        a.push_back(nums[j]);
//        if (nums[j] % 2 != 0) {
//            count++;
//        }
//
//        if (count == k) {
//            s.insert(a);
//            result++;
//        }
//        j++;
//    }
//
//    return result;
//}
int main(){
    vector<int>a = {1,1,2,1,1};
    numberOfSubarrays(a,3);
}