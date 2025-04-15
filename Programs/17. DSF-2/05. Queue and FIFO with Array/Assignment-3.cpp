#include <iostream>
#include <queue>
using namespace std;

// Assignment - 3 : Stack using Queue

class Stack {
private:
    queue<int> q;

public:
    // Push element onto stack
    void push(int x) {
        q.push(x);
        int size = q.size();
        // Rotate the queue to bring the new element to the front
        for (int i = 0; i < size - 1; ++i) {
            q.push(q.front());
            q.pop();
        }
    }

    // Remove the top element
    void pop() {
        if (q.empty()) {
            cout << "Stack Underflow\n";
            return;
        }
        q.pop();
    }

    // Return the top element
    int top() {
        if (q.empty()) {
            throw runtime_error("Stack is empty");
        }
        return q.front();
    }

    // Check if the stack is empty
    bool empty() {
        return q.empty();
    }
};

// Example usage
int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top: " << s.top() << endl; // 30
    s.pop();
    cout << "Top after pop: " << s.top() << endl; // 20

    return 0;
}