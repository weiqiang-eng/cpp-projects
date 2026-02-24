// #199 Binary Tree Right Side View - https://leetcode.com/problems/binary-tree-right-side-view/

#include "helpers.hpp"
#include <vector>
#include <queue>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        // TODO: implement
        return {};
    }
};

int main() {
    Solution sol;
    auto root = makeTree({1,2,3,-1,5,-1,4});
    auto res = sol.rightSideView(root);
    for (int x : res) cout << x << " "; // 1 3 4
    cout << endl;
    return 0;
}
