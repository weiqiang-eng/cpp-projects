// #322 Coin Change - https://leetcode.com/problems/coin-change/

#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        // TODO: implement
        return -1;
    }
};

int main() {
    Solution sol;
    vector<int> coins = {1,2,5};
    cout << sol.coinChange(coins, 11) << endl; // 3
    return 0;
}
