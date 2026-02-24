// #75 Sort Colors - https://leetcode.com/problems/sort-colors/

#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        // TODO: implement
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2,0,2,1,1,0};
    sol.sortColors(nums);
    for (int x : nums) cout << x << " "; // 0 0 1 1 2 2
    cout << endl;
    return 0;
}
