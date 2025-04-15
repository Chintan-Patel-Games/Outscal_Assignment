#include <iostream>
using namespace std;

template <typename T>
class Stack {
private:
    int capacity;
    int top;
    T* arr;

public:
    Stack(int size = 100) { // default size = 100
        capacity = size;
        arr = new T[capacity];
        top = -1;
    }

    // Push(T x): Insert x at the top of the stack
    void Push(T x) {
        if (top == capacity - 1) {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = x;
    }

    // Pop(): Remove the topmost element
    void Pop() {
        if (IsEmpty()) {
            cout << "Stack Underflow\n";
            return;
        }
        top--;
    }

    // IsEmpty(): Check whether the stack is empty
    bool IsEmpty() const {
        return top == -1;
    }

    // getTop(): Return the topmost element
    T getTop() const {
        if (IsEmpty()) {
            throw runtime_error("Stack is empty");
        }
        return arr[top];
    }

    // Destructor
    ~Stack() {
        delete[] arr;
    }
};

int main() {
    Stack<int> s(5);

    s.Push(10);
    s.Push(20);
    s.Push(30);

    cout << "Top Element: " << s.getTop() << endl; // Output: 30

    s.Pop();
    cout << "After popping, Top Element: " << s.getTop() << endl; // Output: 20

    s.Pop();
    s.Pop();

    if (s.IsEmpty()) {
        cout << "Stack is empty!" << endl;
    }

    return 0;
}