// #2 Add Two Numbers - https://leetcode.com/problems/add-two-numbers/

#include "helpers.hpp"
#include <iostream>
using namespace std;

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // TODO: implement
        return nullptr;
    }
};

int main() {
    Solution sol;
    auto l1 = makeList({2,4,3});
    auto l2 = makeList({5,6,4});
    auto res = sol.addTwoNumbers(l1, l2);
    while (res) { cout << res->val << " "; res = res->next; } // 7 0 8
    cout << endl;
    return 0;
}
