// #15 3Sum - https://leetcode.com/problems/3sum/

#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // TODO: implement
        return {};
    }
};

int main() {
    Solution sol;
    vector<int> nums = {-1,0,1,2,-1,-4};
    auto res = sol.threeSum(nums);
    for (auto& t : res) cout << "[" << t[0] << "," << t[1] << "," << t[2] << "] ";
    cout << endl; // [-1,-1,2] [-1,0,1]
    return 0;
}
