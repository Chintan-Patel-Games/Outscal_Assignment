#include <iostream>
using namespace std;

// Assignment - 1 : Queue using Array

template <typename T>
class Queue {
private:
    int frontIndex, rearIndex, currentSize, capacity;
    T* arr;

public:
    // Constructor
    Queue(int cap = 1000) {
        capacity = cap;
        arr = new T[capacity];
        frontIndex = 0;
        rearIndex = 0;
        currentSize = 0;
    }

    // Destructor
    ~Queue() {
        delete[] arr;
    }

    // Insert x into queue
    void push(T x) {
        if (currentSize == capacity) {
            cout << "Queue Overflow\n";
            return;
        }
        arr[rearIndex] = x;
        rearIndex = (rearIndex + 1) % capacity;
        currentSize++;
    }

    // Remove the front element
    void pop() {
        if (empty()) {
            cout << "Queue Underflow\n";
            return;
        }
        frontIndex = (frontIndex + 1) % capacity;
        currentSize--;
    }

    // Return the front element
    T front() {
        if (empty()) {
            throw runtime_error("Queue is empty");
        }
        return arr[frontIndex];
    }

    // Return the size of the queue
    int size() const {
        return currentSize;
    }

    // Return true if queue is empty, false otherwise
    bool empty() const {
        return currentSize == 0;
    }
};

// Example usage
int main() {
    Queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front element: " << q.front() << endl;
    q.pop();
    cout << "Front element after pop: " << q.front() << endl;
    cout << "Size: " << q.size() << endl;
    cout << "Is empty? " << (q.empty() ? "Yes" : "No") << endl;

    return 0;
}