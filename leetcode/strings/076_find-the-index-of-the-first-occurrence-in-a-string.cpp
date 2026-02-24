// #76 Implement strStr() - https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/

#include <string>
#include <iostream>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        // TODO: implement
        return -1;
    }
};

int main() {
    Solution sol;
    cout << sol.strStr("sadbutsad", "sad") << endl; // 0
    cout << sol.strStr("leetcode", "leeto") << endl; // -1
    return 0;
}
