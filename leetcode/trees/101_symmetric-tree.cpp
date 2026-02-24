// #101 Symmetric Tree - https://leetcode.com/problems/symmetric-tree/

#include "helpers.hpp"
#include <iostream>
using namespace std;

class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        // TODO: implement
        return false;
    }
};

int main() {
    Solution sol;
    cout << boolalpha;
    cout << sol.isSymmetric(makeTree({1,2,2,3,4,4,3})) << endl; // true
    return 0;
}
