#include <iostream>
using namespace std;

// Assignment - 2 : Two stacks using an Array

class TwoStacks {
private:
    int* arr;
    int size;
    int top1, top2;

public:
    // Constructor
    TwoStacks(int n) {
        size = n;
        arr = new int[n];
        top1 = -1;
        top2 = size;
    }

    // push1(int x): Pushes x to first stack
    void push1(int x) {
        if (top1 + 1 < top2) {
            arr[++top1] = x;
        } else {
            cout << "Stack Overflow in Stack 1" << endl;
        }
    }

    // push2(int x): Pushes x to second stack
    void push2(int x) {
        if (top2 - 1 > top1) {
            arr[--top2] = x;
        } else {
            cout << "Stack Overflow in Stack 2" << endl;
        }
    }

    // pop1(): Pops element from first stack
    int pop1() {
        if (top1 >= 0) {
            return arr[top1--];
        } else {
            cout << "Stack Underflow in Stack 1" << endl;
            return -1;
        }
    }

    // pop2(): Pops element from second stack
    int pop2() {
        if (top2 < size) {
            return arr[top2++];
        } else {
            cout << "Stack Underflow in Stack 2" << endl;
            return -1;
        }
    }

    // getTop1(): Returns top of stack 1
    int getTop1() const {
        if (top1 >= 0)
            return arr[top1];
        throw runtime_error("Stack 1 is empty");
    }

    // getTop2(): Returns top of stack 2
    int getTop2() const {
        if (top2 < size)
            return arr[top2];
        throw runtime_error("Stack 2 is empty");
    }

    // Destructor
    ~TwoStacks() {
        delete[] arr;
    }
};

int main() {
    TwoStacks ts(10);

    ts.push1(5);
    ts.push1(10);
    ts.push2(15);
    ts.push2(20);

    cout << "Top of Stack 1: " << ts.getTop1() << endl; // Output: 10
    cout << "Top of Stack 2: " << ts.getTop2() << endl; // Output: 20

    cout << "Popped from Stack 1: " << ts.pop1() << endl; // Output: 10
    cout << "Popped from Stack 2: " << ts.pop2() << endl; // Output: 20

    return 0;
}