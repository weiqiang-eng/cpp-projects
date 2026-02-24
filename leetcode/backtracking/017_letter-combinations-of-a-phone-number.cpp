// #17 Letter Combinations of a Phone Number - https://leetcode.com/problems/letter-combinations-of-a-phone-number/

#include <string>
#include <vector>
#include <iostream>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> res;
        string current;
        if (digits.empty()) return res;
        generateCombos(digits, 0, res, current);
        return res;
    }

private:
    unordered_map<char, string> phoneMap = {{'2', "abc"},
                                            {'3', "def"},
                                            {'4', "ghi"},
                                            {'5', "jkl"},
                                            {'6', "mno"},
                                            {'7', "pqrs"},
                                            {'8', "tuv"},
                                            {'9', "wxyz"}
    };
    void generateCombos(const string& digits, uint32_t i, vector<string>& res, string& current)
    {
        if(i == digits.length())
            res.push_back(current); // simply append it to the back of the solution
        else
        {
            auto letters = phoneMap[digits[i]];
            for(auto c: letters)
            {
                current.push_back(c);
                generateCombos(digits, i+1, res, current);
                current.pop_back(); // pop it out so it goes back to the letters at the last level
            }
        }
    }
};

int main() {
    Solution sol;
    auto res = sol.letterCombinations("234");
    for (auto& s : res) cout << s << " ";
    cout << endl; // ad ae af bd be bf cd ce cf
    return 0;
}
