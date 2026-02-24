// #64 Minimum Path Sum - https://leetcode.com/problems/minimum-path-sum/

#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        // TODO: implement
        return 0;
    }
};

int main() {
    Solution sol;
    vector<vector<int>> grid = {{1,3,1},{1,5,1},{4,2,1}};
    cout << sol.minPathSum(grid) << endl; // 7
    return 0;
}
