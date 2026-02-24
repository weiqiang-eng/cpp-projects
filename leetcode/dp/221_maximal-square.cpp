// #221 Maximal Square - https://leetcode.com/problems/maximal-square/

#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        // TODO: implement
        return 0;
    }
};

int main() {
    Solution sol;
    vector<vector<char>> matrix = {
        {'1','0','1','0','0'},
        {'1','0','1','1','1'},
        {'1','1','1','1','1'},
        {'1','0','0','1','0'}
    };
    cout << sol.maximalSquare(matrix) << endl; // 4
    return 0;
}
