// #001 Two Sum - https://leetcode.com/problems/two-sum/
// Time: O(n) | Space: O(n)

#include <vector>
#include <unordered_map>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> twoSum(const vector<int>& nums, int target) {
        unordered_map<int, int> seen;
        for (int i = 0; i < (int)nums.size(); ++i) {
            int complement = target - nums[i];
            if (seen.count(complement)) return {seen[complement], i};
            seen[nums[i]] = i;
        }
        return {};
    }

    vector<int> twoSumBruteForce(const vector<int>& nums, int target) {
        for (int i = 0; i < (int)nums.size(); ++i) {
            for (int j = i + 1; j < (int)nums.size(); ++j) {
                if (nums[i] + nums[j] == target) return {i, j};
            }
        }
        return {};
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2, 7, 8, 11, 15};
    auto res = sol.twoSumBruteForce(nums, 9);
    cout << "[" << res[0] << ", " << res[1] << "]\n"; // [0, 1]
}
