// #189 Rotate Array - https://leetcode.com/problems/rotate-array/

#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // TODO: implement
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1,2,3,4,5,6,7};
    sol.rotate(nums, 3);
    for (int x : nums) cout << x << " "; // 5 6 7 1 2 3 4
    cout << endl;
    return 0;
}
