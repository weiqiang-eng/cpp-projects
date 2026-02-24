// #55 Jump Game - https://leetcode.com/problems/jump-game/

#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        // TODO: implement
        return false;
    }
};

int main() {
    Solution sol;
    cout << boolalpha;
    vector<int> a = {2,3,1,1,4};
    cout << sol.canJump(a) << endl; // true
    vector<int> b = {3,2,1,0,4};
    cout << sol.canJump(b) << endl; // false
    return 0;
}
