// #98 Validate Binary Search Tree - https://leetcode.com/problems/validate-binary-search-tree/

#include "helpers.hpp"
#include <climits>
#include <iostream>
using namespace std;

class Solution {
public:
    bool isValidBST(TreeNode* root) {
        // TODO: implement
        return false;
    }
};

int main() {
    Solution sol;
    cout << boolalpha;
    cout << sol.isValidBST(makeTree({2,1,3})) << endl;   // true
    cout << sol.isValidBST(makeTree({5,1,4,-1,-1,3,6})) << endl; // false
    return 0;
}
