// #295 Find Median from Data Stream - https://leetcode.com/problems/find-median-from-data-stream/

#include <queue>
#include <vector>
#include <iostream>
using namespace std;

class MedianFinder {
public:
    // TODO: add member variables (two heaps)
    MedianFinder() {}
    void addNum(int num) {}
    double findMedian() { return 0.0; }
};

int main() {
    MedianFinder mf;
    mf.addNum(1); mf.addNum(2);
    cout << mf.findMedian() << endl; // 1.5
    mf.addNum(3);
    cout << mf.findMedian() << endl; // 2.0
    return 0;
}
