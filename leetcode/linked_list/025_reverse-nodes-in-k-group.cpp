// #25 Reverse Nodes in k-Group - https://leetcode.com/problems/reverse-nodes-in-k-group/

#include "helpers.hpp"
#include <iostream>
using namespace std;

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        // TODO: implement
        return nullptr;
    }
};

int main() {
    Solution sol;
    auto head = makeList({1,2,3,4,5});
    auto res = sol.reverseKGroup(head, 2);
    while (res) { cout << res->val << " "; res = res->next; } // 2 1 4 3 5
    cout << endl;
    return 0;
}
