#pragma once
#include <vector>
#include <queue>

// Singly linked list node
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// Binary tree node
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Build a linked list from a vector
inline ListNode* makeList(const std::vector<int>& vals) {
    ListNode dummy(0);
    ListNode* cur = &dummy;
    for (int v : vals) { cur->next = new ListNode(v); cur = cur->next; }
    return dummy.next;
}

// Build a binary tree from level-order values (-1 = null)
inline TreeNode* makeTree(const std::vector<int>& vals) {
    if (vals.empty() || vals[0] == -1) return nullptr;
    TreeNode* root = new TreeNode(vals[0]);
    std::queue<TreeNode*> q;
    q.push(root);
    int i = 1;
    while (!q.empty() && i < (int)vals.size()) {
        TreeNode* node = q.front(); q.pop();
        if (i < (int)vals.size() && vals[i] != -1) {
            node->left = new TreeNode(vals[i]); q.push(node->left);
        }
        ++i;
        if (i < (int)vals.size() && vals[i] != -1) {
            node->right = new TreeNode(vals[i]); q.push(node->right);
        }
        ++i;
    }
    return root;
}
