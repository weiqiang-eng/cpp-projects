// #79 Word Search - https://leetcode.com/problems/word-search/

#include <vector>
#include <string>
#include <iostream>
using namespace std;

class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        // TODO: implement
        return false;
    }
};

int main() {
    Solution sol;
    vector<vector<char>> board = {{'A','B','C','E'},{'S','F','C','S'},{'A','D','E','E'}};
    cout << boolalpha;
    cout << sol.exist(board, "ABCCED") << endl; // true
    cout << sol.exist(board, "SEE") << endl;    // true
    return 0;
}
