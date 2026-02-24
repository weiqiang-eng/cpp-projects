// #230 Kth Smallest Element in a BST - https://leetcode.com/problems/kth-smallest-element-in-a-bst/

#include "helpers.hpp"
#include <iostream>
using namespace std;

class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        // TODO: implement
        return 0;
    }
};

int main() {
    Solution sol;
    auto root = makeTree({3,1,4,-1,2});
    cout << sol.kthSmallest(root, 1) << endl; // 1
    return 0;
}
