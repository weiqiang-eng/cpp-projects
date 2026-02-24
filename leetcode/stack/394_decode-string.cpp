// #394 Decode String - https://leetcode.com/problems/decode-string/

#include <string>
#include <stack>
#include <iostream>
using namespace std;

class Solution {
public:
    string decodeString(string s) {
        // TODO: implement
        return "";
    }
};

int main() {
    Solution sol;
    cout << sol.decodeString("3[a]2[bc]") << endl;   // "aaabcbc"
    cout << sol.decodeString("3[a2[c]]") << endl;     // "accaccacc" 
    return 0;
}
