// #49 Group Anagrams - https://leetcode.com/problems/group-anagrams/

#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // TODO: implement
        return {};
    }
};

int main() {
    Solution sol;
    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};
    auto res = sol.groupAnagrams(strs);
    for (auto& group : res) {
        cout << "[";
        for (auto& s : group) cout << s << " ";
        cout << "] ";
    }
    cout << endl;
    return 0;
}
