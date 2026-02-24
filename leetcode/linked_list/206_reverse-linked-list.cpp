// #206 Reverse Linked List - https://leetcode.com/problems/reverse-linked-list/

#include "helpers.hpp"
#include <iostream>
using namespace std;



class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* next;

        while(curr != nullptr)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            
        }
        return prev;
    }
};

int main() {
    Solution sol;
    auto head = makeList({1,2,3,4,5});
    auto res = sol.reverseList(head);
    while (res) { cout << res->val << " "; res = res->next; } // 5 4 3 2 1
    cout << endl;
    return 0;
}
