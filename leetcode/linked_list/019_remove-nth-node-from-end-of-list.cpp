// #19 Remove Nth Node From End of List - https://leetcode.com/problems/remove-nth-node-from-end-of-list/

#include "helpers.hpp"
#include <iostream>
using namespace std;

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // TODO: implement
        return nullptr;
    }
};

int main() {
    Solution sol;
    auto head = makeList({1,2,3,4,5});
    auto res = sol.removeNthFromEnd(head, 2);
    while (res) { cout << res->val << " "; res = res->next; } // 1 2 3 5
    cout << endl;
    return 0;
}
