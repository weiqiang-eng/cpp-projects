// #21 Merge Two Sorted Lists - https://leetcode.com/problems/merge-two-sorted-lists/

#include "helpers.hpp"
#include <iostream>
using namespace std;

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        // TODO: implement
        return nullptr;
    }
};

int main() {
    Solution sol;
    auto l1 = makeList({1,2,4});
    auto l2 = makeList({1,3,4});
    auto res = sol.mergeTwoLists(l1, l2);
    while (res) { cout << res->val << " "; res = res->next; } // 1 1 2 3 4 4
    cout << endl;
    return 0;
}
