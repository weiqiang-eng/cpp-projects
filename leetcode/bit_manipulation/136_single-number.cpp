// #136 Single Number - https://leetcode.com/problems/single-number/

#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {

        int res = 0; // 0 ^ n is n, this the property of XOR, n^n is always 0, all 1s ^ n is ~n
        for (auto num : nums)
        {
            res ^= num;
        }

        return res;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2,2,1,3,3,89,89};
    cout << sol.singleNumber(nums) << endl; // 1
    return 0;
}
