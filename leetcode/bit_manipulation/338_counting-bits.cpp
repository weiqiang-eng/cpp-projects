// #338 Counting Bits - https://leetcode.com/problems/counting-bits/

#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> countBits(int n) {
        // TODO: implement
        return {};
    }
};

int main() {
    Solution sol;
    auto res = sol.countBits(5);
    for (int x : res) cout << x << " "; // 0 1 1 2 1 2
    cout << endl;
    return 0;
}
