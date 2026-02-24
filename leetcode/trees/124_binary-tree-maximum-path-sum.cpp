// #124 Binary Tree Maximum Path Sum - https://leetcode.com/problems/binary-tree-maximum-path-sum/

#include "helpers.hpp"
#include <algorithm>
#include <climits>
#include <iostream>
using namespace std;

class Solution {
public:
    int maxPathSum(TreeNode* root) {
        // TODO: implement
        return 0;
    }
};

int main() {
    Solution sol;
    auto root = makeTree({-10,9,20,-1,-1,15,7});
    cout << sol.maxPathSum(root) << endl; // 42
    return 0;
}
