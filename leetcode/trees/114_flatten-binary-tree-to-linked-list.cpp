// #114 Flatten Binary Tree to Linked List - https://leetcode.com/problems/flatten-binary-tree-to-linked-list/

#include "helpers.hpp"
#include <iostream>
using namespace std;

class Solution {
public:
    void flatten(TreeNode* root) {
        // TODO: implement
    }
};

int main() {
    Solution sol;
    auto root = makeTree({1,2,5,3,4,-1,6});
    sol.flatten(root);
    while (root) { cout << root->val << " "; root = root->right; } // 1 2 3 4 5 6
    cout << endl;
    return 0;
}
