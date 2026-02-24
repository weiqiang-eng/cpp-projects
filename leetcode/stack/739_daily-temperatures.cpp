// #739 Daily Temperatures - https://leetcode.com/problems/daily-temperatures/

#include <vector>
#include <stack>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temps) {
        // TODO: implement
        return {};
    }
};

int main() {
    Solution sol;
    vector<int> temps = {73,74,75,71,69,72,76,73};
    auto res = sol.dailyTemperatures(temps);
    for (int x : res) cout << x << " "; // 1 1 4 2 1 1 0 0
    cout << endl;
    return 0;
}
