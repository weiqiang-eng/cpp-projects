// #138 Copy List with Random Pointer - https://leetcode.com/problems/copy-list-with-random-pointer/

#include <unordered_map>
#include <iostream>
using namespace std;

class Solution {
public:
    // Node with random pointer
    struct Node {
        int val;
        Node* next;
        Node* random;
        Node(int x) : val(x), next(nullptr), random(nullptr) {}
    };
    Node* copyRandomList(Node* head) {
        // TODO: implement
        return nullptr;
    }
};

int main() {
    Solution sol;
    cout << "Implement and test copyRandomList" << endl;
    return 0;
}
