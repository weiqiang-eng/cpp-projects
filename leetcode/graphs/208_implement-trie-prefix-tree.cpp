// #208 Implement Trie (Prefix Tree) - https://leetcode.com/problems/implement-trie-prefix-tree/

#include <string>
#include <iostream>
using namespace std;

class Trie {
public:
    // TODO: add TrieNode struct and members
    Trie() {}
    void insert(string word) {}
    bool search(string word) { return false; }
    bool startsWith(string prefix) { return false; }
};

int main() {
    Trie trie;
    trie.insert("apple");
    cout << boolalpha;
    cout << trie.search("apple") << endl;     // true
    cout << trie.search("app") << endl;       // false
    cout << trie.startsWith("app") << endl;   // true
    return 0;
}
