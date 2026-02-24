// #3 Longest Substring Without Repeating Characters - https://leetcode.com/problems/longest-substring-without-repeating-characters/

#include <string>
#include <unordered_set>
#include <iostream>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // TODO: implement
        return 0;
    }
};

int main() {
    Solution sol;
    cout << sol.lengthOfLongestSubstring("abcabcbb") << endl; // 3
    cout << sol.lengthOfLongestSubstring("bbbbb") << endl;    // 1
    return 0;
}
