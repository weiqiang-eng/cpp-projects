// #337 House Robber III - https://leetcode.com/problems/house-robber-iii/

#include "helpers.hpp"
#include <unordered_map>
#include <algorithm>
#include <iostream>
using namespace std;

class Solution {
public:
    int rob(TreeNode* root) {
        // TODO: implement
        return 0;
    }
};

int main() {
    Solution sol;
    auto root = makeTree({3,2,3,-1,3,-1,1});
    cout << sol.rob(root) << endl; // 7
    return 0;
}
