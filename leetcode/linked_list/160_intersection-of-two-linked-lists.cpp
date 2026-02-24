// #160 Intersection of Two Linked Lists - https://leetcode.com/problems/intersection-of-two-linked-lists/

#include "helpers.hpp"
#include <iostream>
using namespace std;

class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        // TODO: implement
        return nullptr;
    }
};

int main() {
    Solution sol;
    auto common = makeList({8,4,5});
    auto a = makeList({4,1}); auto ca = a; while(ca->next) ca=ca->next; ca->next = common;
    auto b = makeList({5,6,1}); auto cb = b; while(cb->next) cb=cb->next; cb->next = common;
    auto res = sol.getIntersectionNode(a, b);
    cout << (res ? res->val : -1) << endl; // 8
    return 0;
}
