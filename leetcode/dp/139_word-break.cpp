// #139 Word Break - https://leetcode.com/problems/word-break/

#include <string>
#include <vector>
#include <unordered_set>
#include <iostream>
using namespace std;

class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        // TODO: implement
        return false;
    }
};

int main() {
    Solution sol;
    vector<string> dict = {"leet","code"};
    cout << boolalpha << sol.wordBreak("leetcode", dict) << endl; // true
    return 0;
}
