// #131 Palindrome Partitioning - https://leetcode.com/problems/palindrome-partitioning/

#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<vector<string>> partition(string s) {
        // TODO: implement
        return {};
    }
};

int main() {
    Solution sol;
    auto res = sol.partition("aab");
    for (auto& p : res) {
        for (auto& s : p) cout << s << " ";
        cout << "| ";
    }
    cout << endl; // a a b | aa b |
    return 0;
}
