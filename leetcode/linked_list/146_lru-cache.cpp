// #146 LRU Cache - https://leetcode.com/problems/lru-cache/

#include <unordered_map>
#include <list>
#include <iostream>
using namespace std;

class LRUCache {
public:
    // TODO: add member variables
    LRUCache(int capacity) {}
    int get(int key) { return -1; }
    void put(int key, int value) {}
};

int main() {
    LRUCache cache(2);
    cache.put(1, 1);
    cache.put(2, 2);
    cout << cache.get(1) << endl; // 1
    cache.put(3, 3);              // evicts key 2
    cout << cache.get(2) << endl; // -1
    return 0;
}
