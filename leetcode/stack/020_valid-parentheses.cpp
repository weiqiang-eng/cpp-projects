// #20 Valid Parentheses - https://leetcode.com/problems/valid-parentheses/

#include <string>
#include <stack>
#include <iostream>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        // TODO: implement
        return false;
    }
};

int main() {
    Solution sol;
    cout << boolalpha;
    cout << sol.isValid("()[]{}") << endl; // true
    cout << sol.isValid("(]") << endl;     // false
    return 0;
}
