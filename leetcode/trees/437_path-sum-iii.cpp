// #437 Path Sum III - https://leetcode.com/problems/path-sum-iii/

#include "helpers.hpp"
#include <unordered_map>
#include <iostream>
using namespace std;

class Solution {
public:
    int pathSum(TreeNode* root, int targetSum) {
        // TODO: implement
        return 0;
    }
};

int main() {
    Solution sol;
    auto root = makeTree({10,5,-3,3,2,-1,11,3,-2,-1,1});
    cout << sol.pathSum(root, 8) << endl; // 3
    return 0;
}
