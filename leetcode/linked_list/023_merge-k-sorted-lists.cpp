// #23 Merge k Sorted Lists - https://leetcode.com/problems/merge-k-sorted-lists/

#include "helpers.hpp"
#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        // TODO: implement
        return nullptr;
    }
};

int main() {
    Solution sol;
    vector<ListNode*> lists = {makeList({1,4,5}), makeList({1,3,4}), makeList({2,6})};
    auto res = sol.mergeKLists(lists);
    while (res) { cout << res->val << " "; res = res->next; } // 1 1 2 3 4 4 5 6
    cout << endl;
    return 0;
}
