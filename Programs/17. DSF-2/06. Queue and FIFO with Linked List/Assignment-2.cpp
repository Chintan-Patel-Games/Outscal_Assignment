#include <iostream>
#include <stack>

// Assignment - 2 : Queue using Stack

template <typename T>
class Queue {
private:
    std::stack<T> inStack, outStack;

    // Helper to transfer elements from inStack to outStack
    void transferInToOut() {
        if (outStack.empty()) {
            while (!inStack.empty()) {
                outStack.push(inStack.top());
                inStack.pop();
            }
        }
    }

public:
    // Push an element to the back of the queue
    void push(T x) {
        inStack.push(x);
    }

    // Remove the front element
    void pop() {
        transferInToOut();
        if (!outStack.empty()) {
            outStack.pop();
        } else {
            std::cerr << "Queue is empty. Cannot pop.\n";
        }
    }

    // Return the front element
    T front() {
        transferInToOut();
        if (!outStack.empty()) {
            return outStack.top();
        } else {
            std::cerr << "Queue is empty. Cannot access front.\n";
            exit(EXIT_FAILURE);
        }
    }

    // Return the size of the queue
    int size() {
        return inStack.size() + outStack.size();
    }

    // Check if the queue is empty
    bool empty() {
        return inStack.empty() && outStack.empty();
    }
};

int main() {
    Queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);

    std::cout << "Front: " << q.front() << "\n"; // 1
    q.pop();

    std::cout << "Front after pop: " << q.front() << "\n"; // 2
    std::cout << "Size: " << q.size() << "\n";             // 2
    std::cout << "Is empty: " << (q.empty() ? "Yes" : "No") << "\n";

    return 0;
}