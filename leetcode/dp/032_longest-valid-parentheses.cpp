// #32 Longest Valid Parentheses - https://leetcode.com/problems/longest-valid-parentheses/

#include <string>
#include <stack>
#include <iostream>
using namespace std;

class Solution {
public:
    int longestValidParentheses(string s) {
        // TODO: implement
        return 0;
    }
};

int main() {
    Solution sol;
    cout << sol.longestValidParentheses("(()") << endl;   // 2
    cout << sol.longestValidParentheses(")()())") << endl; // 4
    return 0;
}
