// #238 Product of Array Except Self - https://leetcode.com/problems/product-of-array-except-self/

#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // TODO: implement
        return {};
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1,2,3,4};
    auto res = sol.productExceptSelf(nums);
    for (int x : res) cout << x << " "; // 24 12 8 6
    cout << endl;
    return 0;
}
