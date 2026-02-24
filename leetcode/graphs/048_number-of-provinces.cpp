// #48 Number of Provinces - https://leetcode.com/problems/number-of-provinces/

#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        // TODO: implement
        return 0;
    }
};

int main() {
    Solution sol;
    vector<vector<int>> g = {{1,1,0},{1,1,0},{0,0,1}};
    cout << sol.findCircleNum(g) << endl; // 2
    return 0;
}
