// #34 Find First and Last Position of Element in Sorted Array - https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        // TODO: implement
        return {-1, -1};
    }
};

int main() {
    Solution sol;
    vector<int> nums = {5,7,7,8,8,10};
    auto res = sol.searchRange(nums, 8);
    cout << res[0] << " " << res[1] << endl; // 3 4
    return 0;
}
