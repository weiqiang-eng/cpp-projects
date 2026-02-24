// #33 Search in Rotated Sorted Array - https://leetcode.com/problems/search-in-rotated-sorted-array/

#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        // TODO: implement
        return -1;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {4,5,6,7,0,1,2};
    cout << sol.search(nums, 0) << endl; // 4
    cout << sol.search(nums, 3) << endl; // -1
    return 0;
}
