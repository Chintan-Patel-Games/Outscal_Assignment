#include <iostream>
using namespace std;

// Assignment - 2 : Circular queue using Linked List

// Node structure for the linked list
template <typename T>
struct Node {
    T data;
    Node* next;
    Node(T val) : data(val), next(nullptr) {}
};

template <typename T>
class Queue {
private:
    Node<T>* frontNode;
    Node<T>* rearNode;
    int currentSize;

public:
    // Constructor to initialize the queue
    Queue() : frontNode(nullptr), rearNode(nullptr), currentSize(0) {}

    // Destructor to clean up memory
    ~Queue() {
        while (!empty()) {
            pop();
        }
    }

    // Function to insert an element into the queue
    void push(T x) {
        Node<T>* newNode = new Node<T>(x);
        if (rearNode == nullptr) {
            // Queue is empty
            frontNode = rearNode = newNode;
        } else {
            // Add the new node at the rear of the queue
            rearNode->next = newNode;
            rearNode = newNode;
        }
        currentSize++;
    }

    // Function to remove the front element from the queue
    void pop() {
        if (empty()) {
            cout << "Queue is empty. Cannot pop." << endl;
            return;
        }
        Node<T>* temp = frontNode;
        frontNode = frontNode->next;
        delete temp;

        // If the queue becomes empty, set rear to nullptr
        if (frontNode == nullptr) {
            rearNode = nullptr;
        }
        currentSize--;
    }

    // Function to get the front element of the queue
    T front() {
        if (empty()) {
            cout << "Queue is empty. Cannot access front." << endl;
            exit(EXIT_FAILURE);  // Terminate the program if queue is empty
        }
        return frontNode->data;
    }

    // Function to get the size of the queue
    int size() {
        return currentSize;
    }

    // Function to check if the queue is empty
    bool empty() {
        return frontNode == nullptr;
    }
};

int main() {
    Queue<int> q;  // Create a queue of integers

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