// #142 Linked List Cycle II - https://leetcode.com/problems/linked-list-cycle-ii/

#include "helpers.hpp"
#include <iostream>
using namespace std;

class Solution {
public:
    ListNode* detectCycle(ListNode* head) {
        // TODO: implement
        return nullptr;
    }
};

int main() {
    Solution sol;
    auto head = makeList({3,2,0,-4});
    auto cur = head; while (cur->next) cur = cur->next;
    cur->next = head->next; // cycle at node val=2
    auto res = sol.detectCycle(head);
    cout << (res ? res->val : -1) << endl; // 2
    return 0;
}
