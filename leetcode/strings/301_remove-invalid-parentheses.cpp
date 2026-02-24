// #301 Remove Invalid Parentheses - https://leetcode.com/problems/remove-invalid-parentheses/

#include <string>
#include <vector>
#include <unordered_set>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<string> removeInvalidParentheses(string s) {
        // TODO: implement
        return {};
    }
};

int main() {
    Solution sol;
    auto res = sol.removeInvalidParentheses("()())()");
    for (auto& s : res) cout << s << " "; // (())() ()()()
    cout << endl;
    return 0;
}
