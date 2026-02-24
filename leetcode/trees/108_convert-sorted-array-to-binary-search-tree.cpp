// #108 Convert Sorted Array to Binary Search Tree - https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/

#include "helpers.hpp"
#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        // TODO: implement
        return nullptr;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {-10,-3,0,5,9};
    auto root = sol.sortedArrayToBST(nums);
    cout << (root ? root->val : -1) << endl; // 0
    return 0;
}
