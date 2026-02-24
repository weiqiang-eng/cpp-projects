// #105 Construct Binary Tree from Preorder and Inorder Traversal - https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/

#include "helpers.hpp"
#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        // TODO: implement
        return nullptr;
    }
};

int main() {
    Solution sol;
    vector<int> pre = {3,9,20,15,7}, in = {9,3,15,20,7};
    auto root = sol.buildTree(pre, in);
    cout << (root ? root->val : -1) << endl; // 3
    return 0;
}
