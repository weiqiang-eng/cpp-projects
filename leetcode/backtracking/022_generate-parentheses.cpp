// #22 Generate Parentheses - https://leetcode.com/problems/generate-parentheses/

#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        // TODO: implement
        return {};
    }
};

int main() {
    Solution sol;
    auto res = sol.generateParenthesis(3);
    for (auto& s : res) cout << s << " ";
    cout << endl;
    return 0;
}
