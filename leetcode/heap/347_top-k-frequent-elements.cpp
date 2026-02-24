// #347 Top K Frequent Elements - https://leetcode.com/problems/top-k-frequent-elements/

#include <vector>
#include <unordered_map>
#include <queue>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // TODO: implement
        return {};
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1,1,1,2,2,3};
    auto res = sol.topKFrequent(nums, 2);
    for (int x : res) cout << x << " "; // 1 2
    cout << endl;
    return 0;
}
