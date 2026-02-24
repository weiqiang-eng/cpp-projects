// #236 Lowest Common Ancestor of a Binary Tree - https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/

#include "helpers.hpp"
#include <iostream>
using namespace std;

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // TODO: implement
        return nullptr;
    }
};

int main() {
    Solution sol;
    auto root = makeTree({3,5,1,6,2,0,8,-1,-1,7,4});
    // p=5, q=1 -> LCA=3
    cout << "Implement and test LCA" << endl;
    return 0;
}
