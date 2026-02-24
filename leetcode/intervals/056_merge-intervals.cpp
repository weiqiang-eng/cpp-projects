// #56 Merge Intervals - https://leetcode.com/problems/merge-intervals/

#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        // TODO: implement
        return {};
    }
};

int main() {
    Solution sol;
    vector<vector<int>> intervals = {{1,3},{2,6},{8,10},{15,18}};
    auto res = sol.merge(intervals);
    for (auto& v : res) cout << "[" << v[0] << "," << v[1] << "] "; // [1,6] [8,10] [15,18]
    cout << endl;
    return 0;
}
