// #46 Permutations - https://leetcode.com/problems/permutations/

#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        // TODO: implement
        return {};
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1,2,3};
    auto res = sol.permute(nums);
    cout << res.size() << " permutations" << endl; // 6
    return 0;
}
