// #31 Next Permutation - https://leetcode.com/problems/next-permutation/

#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // TODO: implement
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1,2,3};
    sol.nextPermutation(nums);
    for (int x : nums) cout << x << " "; // 1 3 2
    cout << endl;
    return 0;
}
