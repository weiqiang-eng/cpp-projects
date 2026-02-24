// #416 Partition Equal Subset Sum - https://leetcode.com/problems/partition-equal-subset-sum/

#include <vector>
#include <numeric>
#include <iostream>
using namespace std;

class Solution {
public:
    bool canPartition(vector<int>& nums) {
        // TODO: implement
        return false;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1,5,11,5};
    cout << boolalpha << sol.canPartition(nums) << endl; // true
    return 0;
}
