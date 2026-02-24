// #73 Set Matrix Zeroes - https://leetcode.com/problems/set-matrix-zeroes/

#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        // TODO: implement
    }
};

int main() {
    Solution sol;
    vector<vector<int>> m = {{1,1,1},{1,0,1},{1,1,1}};
    sol.setZeroes(m);
    for (auto& row : m) { for (int x : row) cout << x << " "; cout << endl; }
    // 1 0 1 / 0 0 0 / 1 0 1
    return 0;
}
