// #78 Subsets - https://leetcode.com/problems/subsets/

#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        // TODO: implement
        return {};
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1,2,3};
    auto res = sol.subsets(nums);
    cout << res.size() << " subsets" << endl; // 8
    return 0;
}
