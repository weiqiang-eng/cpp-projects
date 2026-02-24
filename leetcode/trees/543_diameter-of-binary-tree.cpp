// #543 Diameter of Binary Tree - https://leetcode.com/problems/diameter-of-binary-tree/

#include "helpers.hpp"
#include <algorithm>
#include <iostream>
using namespace std;

class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        // TODO: implement
        return 0;
    }
};

int main() {
    Solution sol;
    auto root = makeTree({1,2,3,4,5});
    cout << sol.diameterOfBinaryTree(root) << endl; // 3
    return 0;
}
