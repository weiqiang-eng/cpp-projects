// #200 Number of Islands - https://leetcode.com/problems/number-of-islands/

#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        // TODO: implement
        return 0;
    }
};

int main() {
    Solution sol;
    vector<vector<char>> grid = {
        {'1','1','1','1','0'},
        {'1','1','0','1','0'},
        {'1','1','0','0','0'},
        {'0','0','0','0','0'}
    };
    cout << sol.numIslands(grid) << endl; // 1
    return 0;
}
