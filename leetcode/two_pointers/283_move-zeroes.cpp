// #283 Move Zeroes - https://leetcode.com/problems/move-zeroes/

#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // TODO: implement
    }
};

int main() {
    Solution sol;
    vector<int> nums = {0,1,0,3,12};
    sol.moveZeroes(nums);
    for (int x : nums) cout << x << " "; // 1 3 12 0 0
    cout << endl;
    return 0;
}
