// #10 Regular Expression Matching - https://leetcode.com/problems/regular-expression-matching/

#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    bool isMatch(string s, string p) {
        // TODO: implement
        return false;
    }
};

int main() {
    Solution sol;
    cout << boolalpha;
    cout << sol.isMatch("aa", "a") << endl;   // false
    cout << sol.isMatch("aa", "a*") << endl;  // true
    return 0;
}
