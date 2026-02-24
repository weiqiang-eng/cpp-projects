// #102 Binary Tree Level Order Traversal - https://leetcode.com/problems/binary-tree-level-order-traversal/

#include "helpers.hpp"
#include <vector>
#include <queue>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        // TODO: implement
        return {};
    }
};

int main() {
    Solution sol;
    auto root = makeTree({3,9,20,-1,-1,15,7});
    auto res = sol.levelOrder(root);
    for (auto& level : res) {
        for (int x : level) cout << x << " ";
        cout << "| ";
    } // 3 | 9 20 | 15 7 |
    cout << endl;
    return 0;
}
