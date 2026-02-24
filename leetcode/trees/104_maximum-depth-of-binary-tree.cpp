// #104 Maximum Depth of Binary Tree - https://leetcode.com/problems/maximum-depth-of-binary-tree/

#include "helpers.hpp"
#include <iostream>
using namespace std;

class Solution {
public:
    int maxDepth(TreeNode* root) {
        // TODO: implement
        return 0;
    }
};

int main() {
    Solution sol;
    auto root = makeTree({3,9,20,-1,-1,15,7});
    cout << sol.maxDepth(root) << endl; // 3
    return 0;
}
