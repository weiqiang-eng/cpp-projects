// #118 Pascal's Triangle - https://leetcode.com/problems/pascals-triangle/

#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        // TODO: implement
        return {};
    }
};

int main() {
    Solution sol;
    auto res = sol.generate(5);
    for (auto& row : res) {
        for (int x : row) cout << x << " ";
        cout << endl;
    }
    return 0;
}
