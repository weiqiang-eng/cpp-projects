// #234 Palindrome Linked List - https://leetcode.com/problems/palindrome-linked-list/

#include "helpers.hpp"
#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        // TODO: implement
        return false;
    }
};

int main() {
    Solution sol;
    cout << boolalpha;
    cout << sol.isPalindrome(makeList({1,2,2,1})) << endl; // true
    cout << sol.isPalindrome(makeList({1,2})) << endl;     // false
    return 0;
}
