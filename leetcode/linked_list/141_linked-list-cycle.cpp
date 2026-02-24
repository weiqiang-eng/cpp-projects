// #141 Linked List Cycle - https://leetcode.com/problems/linked-list-cycle/

#include "helpers.hpp"
#include <iostream>
using namespace std;

class Solution {
public:
    bool hasCycle(ListNode* head) {
        // TODO: implement
        return false;
    }
};

int main() {
    Solution sol;
    auto head = makeList({3,2,0,-4});
    // Create cycle: last node -> second node
    auto cur = head; while (cur->next) cur = cur->next;
    cur->next = head->next;
    cout << boolalpha << sol.hasCycle(head) << endl; // true
    return 0;
}
