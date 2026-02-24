// #399 Evaluate Division - https://leetcode.com/problems/evaluate-division/

#include <vector>
#include <string>
#include <unordered_map>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<double> calcEquation(
        vector<vector<string>>& equations,
        vector<double>& values,
        vector<vector<string>>& queries) {
        // TODO: implement
        return {};
    }
};

int main() {
    Solution sol;
    vector<vector<string>> eq = {{"a","b"},{"b","c"}};
    vector<double> vals = {2.0, 3.0};
    vector<vector<string>> queries = {{"a","c"},{"b","a"},{"a","e"}};
    auto res = sol.calcEquation(eq, vals, queries);
    for (double d : res) cout << d << " "; // 6 0.5 -1
    cout << endl;
    return 0;
}
