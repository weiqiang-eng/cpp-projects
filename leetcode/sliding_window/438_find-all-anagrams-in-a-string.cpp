// #438 Find All Anagrams in a String - https://leetcode.com/problems/find-all-anagrams-in-a-string/

#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        // TODO: implement
        return {};
    }
};

int main() {
    Solution sol;
    auto res = sol.findAnagrams("cbaebabacd", "abc");
    for (int i : res) cout << i << " "; // 0 6
    cout << endl;
    return 0;
}
