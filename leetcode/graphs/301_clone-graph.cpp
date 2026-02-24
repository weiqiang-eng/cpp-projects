// #301 Clone Graph - https://leetcode.com/problems/clone-graph/

#include <vector>
#include <unordered_map>
#include <iostream>
using namespace std;

class Solution {
public:
    // Graph node definition
    struct GNode {
        int val;
        vector<GNode*> neighbors;
        GNode(int v) : val(v) {}
    };
    GNode* cloneGraph(GNode* node) {
        // TODO: implement
        return nullptr;
    }
};

int main() {
    Solution sol;
    cout << "Implement and test cloneGraph" << endl;
    return 0;
}
