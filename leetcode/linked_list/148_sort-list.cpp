// #148 Sort List - https://leetcode.com/problems/sort-list/

#include "helpers.hpp"
#include <iostream>
using namespace std;

class Solution {
public:
    ListNode* sortList(ListNode* head) {
        // TODO: implement
        return nullptr;
    }
};

int main() {
    Solution sol;
    auto head = makeList({4,2,1,3});
    auto res = sol.sortList(head);
    while (res) { cout << res->val << " "; res = res->next; } // 1 2 3 4
    cout << endl;
    return 0;
}
