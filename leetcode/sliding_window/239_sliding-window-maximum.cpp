// #239 Sliding Window Maximum - https://leetcode.com/problems/sliding-window-maximum/

#include <vector>
#include <deque>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        // TODO: implement
        return {};
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1,3,-1,-3,5,3,6,7};
    auto res = sol.maxSlidingWindow(nums, 3);
    for (int x : res) cout << x << " "; // 3 3 5 5 6 7
    cout << endl;
    return 0;
}
