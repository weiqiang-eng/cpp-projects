// #226 Invert Binary Tree - https://leetcode.com/problems/invert-binary-tree/

#include "helpers.hpp"
#include <iostream>
using namespace std;

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        // TODO: implement
        return nullptr;
    }
};

int main() {
    Solution sol;
    auto root = makeTree({4,2,7,1,3,6,9});
    root = sol.invertTree(root);
    cout << root->left->val << " " << root->right->val << endl; // 7 2
    return 0;
}
