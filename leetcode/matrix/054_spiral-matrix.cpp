// #54 Spiral Matrix - https://leetcode.com/problems/spiral-matrix/

#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        // TODO: implement
        return {};
    }
};

int main() {
    Solution sol;
    vector<vector<int>> m = {{1,2,3},{4,5,6},{7,8,9}};
    auto res = sol.spiralOrder(m);
    for (int x : res) cout << x << " "; // 1 2 3 6 9 8 7 4 5
    cout << endl;
    return 0;
}
