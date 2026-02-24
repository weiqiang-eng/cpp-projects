// #155 Min Stack - https://leetcode.com/problems/min-stack/

#include <stack>
#include <iostream>
using namespace std;

class MinStack {
public:
    // TODO: add member variables
    MinStack() {}
    void push(int val) {}
    void pop() {}
    int top() { return 0; }
    int getMin() { return 0; }
};

int main() {
    MinStack ms;
    ms.push(-2); ms.push(0); ms.push(-3);
    cout << ms.getMin() << endl; // -3
    ms.pop();
    cout << ms.top() << endl;    // 0
    cout << ms.getMin() << endl; // -2
    return 0;
}
