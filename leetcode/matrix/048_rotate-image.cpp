// #48 Rotate Image - https://leetcode.com/problems/rotate-image/

#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // TODO: implement
    }
};

int main() {
    Solution sol;
    vector<vector<int>> m = {{1,2,3},{4,5,6},{7,8,9}};
    sol.rotate(m);
    for (auto& row : m) { for (int x : row) cout << x << " "; cout << endl; }
    // 7 4 1 / 8 5 2 / 9 6 3
    return 0;
}
