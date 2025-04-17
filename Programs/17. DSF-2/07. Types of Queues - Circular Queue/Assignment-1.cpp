#include <iostream>
using namespace std;

// Assignment - 1 : Circular queue using Array

template <typename T>
class CircularQueue {
private:
    T* arr;
    int frontIndex, rearIndex, capacity;
    int currentSize;

public:
    // Constructor to initialize the queue with given capacity
    CircularQueue(int cap) {
        capacity = cap;
        arr = new T[capacity];
        frontIndex = -1;
        rearIndex = -1;
        currentSize = 0;
    }

    // Destructor to free memory
    ~CircularQueue() {
        delete[] arr;
    }

    // Function to insert an element into the queue
    void push(T x) {
        if (currentSize == capacity) {
            cout << "Queue is full. Cannot push " << x << endl;
            return;
        }

        if (frontIndex == -1) {
            frontIndex = 0;  // If queue is empty, set front to 0
        }

        // Circularly increment the rear index
        rearIndex = (rearIndex + 1) % capacity;
        arr[rearIndex] = x;
        currentSize++;
    }

    // Function to remove the front element from the queue
    void pop() {
        if (empty()) {
            cout << "Queue is empty. Cannot pop." << endl;
            return;
        }

        // Move front index circularly
        frontIndex = (frontIndex + 1) % capacity;
        currentSize--;
    }

    // Function to get the front element
    T front() {
        if (empty()) {
            cout << "Queue is empty. Cannot access front." << endl;
            exit(EXIT_FAILURE);  // Terminate the program if queue is empty
        }
        return arr[frontIndex];
    }

    // Function to get the size of the queue
    int size() {
        return currentSize;
    }

    // Function to check if the queue is empty
    bool empty() {
        return currentSize == 0;
    }

    // Function to check if the queue is full
    bool full() {
        return currentSize == capacity;
    }
};

int main() {
    CircularQueue<int> q(5);  // Create a queue with capacity 5

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    cout << "Front: " << q.front() << endl;
    cout << "Size: " << q.size() << endl;

    q.pop();
    cout << "Front after pop: " << q.front() << endl;
    cout << "Size after pop: " << q.size() << endl;

    q.push(6);
    cout << "Front after pushing 6: " << q.front() << endl;
    cout << "Size after pushing 6: " << q.size() << endl;

    return 0;
}