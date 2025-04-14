#include <iostream>
using namespace std;

// Assignment - 1 : Stack using Linked list

// Template for generic stack
template <typename T>
class Stack {
private:
    // Node structure
    struct Node {
        T data;
        Node* next;
        Node(T value) : data(value), next(nullptr) {}
    };

    Node* top; // Pointer to top of the stack

public:
    // Constructor
    Stack() : top(nullptr) {}

    // Destructor to free memory
    ~Stack() {
        while (!IsEmpty()) {
            Pop();
        }
    }

    // Push operation: O(1)
    void Push(T x) {
        Node* newNode = new Node(x);
        newNode->next = top;
        top = newNode;
    }

    // Pop operation: O(1)
    void Pop() {
        if (IsEmpty()) {
            cout << "Stack Underflow\n";
            return;
        }
        Node* temp = top;
        top = top->next;
        delete temp;
    }

    // Check if stack is empty: O(1)
    bool IsEmpty() const {
        return top == nullptr;
    }

    // Get top element: O(1)
    T getTop() const {
        if (IsEmpty()) {
            throw runtime_error("Stack is empty");
        }
        return top->data;
    }
};

int main() {
    Stack<int> s;

    s.Push(10);
    s.Push(20);
    s.Push(30);

    cout << "Top element: " << s.getTop() << endl; // 30

    s.Pop();
    cout << "Top after pop: " << s.getTop() << endl; // 20

    cout << "Is stack empty? " << (s.IsEmpty() ? "Yes" : "No") << endl;

    return 0;
}