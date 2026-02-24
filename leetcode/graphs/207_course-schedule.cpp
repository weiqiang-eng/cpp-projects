// #207 Course Schedule - https://leetcode.com/problems/course-schedule/

#include <vector>
#include <queue>
#include <iostream>
using namespace std;

class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        // TODO: implement
        return false;
    }
};

int main() {
    Solution sol;
    vector<vector<int>> prereqs = {{1,0}};
    cout << boolalpha << sol.canFinish(2, prereqs) << endl; // true
    return 0;
}
