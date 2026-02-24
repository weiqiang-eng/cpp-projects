// #994 Rotting Oranges - https://leetcode.com/problems/rotting-oranges/

#include <vector>
#include <queue>
#include <iostream>
using namespace std;

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        // TODO: implement
        return -1;
    }
};

int main() {
    Solution sol;
    vector<vector<int>> grid = {{2,1,1},{1,1,0},{0,1,1}};
    cout << sol.orangesRotting(grid) << endl; // 4
    return 0;
}
