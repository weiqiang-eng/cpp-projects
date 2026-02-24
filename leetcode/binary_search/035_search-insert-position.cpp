// #35 Search Insert Position - https://leetcode.com/problems/search-insert-position/

#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // TODO: implement
        return 0;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1,3,5,6};
    cout << sol.searchInsert(nums, 5) << endl; // 2
    cout << sol.searchInsert(nums, 2) << endl; // 1
    return 0;
}
