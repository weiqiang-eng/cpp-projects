// #94 Binary Tree Inorder Traversal - https://leetcode.com/problems/binary-tree-inorder-traversal/

#include "helpers.hpp"
#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        // TODO: implement
        return {};
    }
};

int main() {
    Solution sol;
    auto root = makeTree({1,-1,2,3});
    auto res = sol.inorderTraversal(root);
    for (int x : res) cout << x << " "; // 1 3 2
    cout << endl;
    return 0;
}
