// #240 Search a 2D Matrix II - https://leetcode.com/problems/search-a-2d-matrix-ii/

#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // TODO: implement
        return false;
    }
};

int main() {
    Solution sol;
    vector<vector<int>> m = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    cout << boolalpha << sol.searchMatrix(m, 5) << endl;  // true
    cout << sol.searchMatrix(m, 20) << endl; // false
    return 0;
}
