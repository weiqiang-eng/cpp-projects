// #74 Search a 2D Matrix - https://leetcode.com/problems/search-a-2d-matrix/

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
    vector<vector<int>> matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    cout << boolalpha << sol.searchMatrix(matrix, 3) << endl; // true
    return 0;
}
