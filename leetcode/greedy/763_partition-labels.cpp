// #763 Partition Labels - https://leetcode.com/problems/partition-labels/

#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> partitionLabels(string s) {
        // TODO: implement
        return {};
    }
};

int main() {
    Solution sol;
    auto res = sol.partitionLabels("ababcbacadefegdehijhklij");
    for (int x : res) cout << x << " "; // 9 7 8
    cout << endl;
    return 0;
}
