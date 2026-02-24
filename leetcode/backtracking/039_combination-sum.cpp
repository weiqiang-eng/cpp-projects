// #39 Combination Sum - https://leetcode.com/problems/combination-sum/

#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        // TODO: implement
        return {};
    }
};

int main() {
    Solution sol;
    vector<int> cands = {2,3,6,7};
    auto res = sol.combinationSum(cands, 7);
    for (auto& v : res) {
        for (int x : v) cout << x << " ";
        cout << "| ";
    } // 2 2 3 | 7 |
    cout << endl;
    return 0;
}
