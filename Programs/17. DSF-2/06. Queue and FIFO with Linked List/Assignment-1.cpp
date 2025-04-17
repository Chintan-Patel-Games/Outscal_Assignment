#include <iostream>

// Assignment - 1 : Queue using linked list

template <typename T>
class Queue {
private:
    struct Node {
        T data;
        Node* next;
        Node(T val) : data(val), next(nullptr) {}
    };

    Node* frontNode;
    Node* rearNode;
    int count;

public:
    // Constructor
    Queue() : frontNode(nullptr), rearNode(nullptr), count(0) {}

    // Destructor to clean up memory
    ~Queue() {
        while (!empty()) {
            pop();
        }
    }

    // push(x): Insert x at the rear
    void push(T x) {
        Node* newNode = new Node(x);
        if (rearNode) {
            rearNode->next = newNode;
        } else {
            frontNode = newNode;
        }
        rearNode = newNode;
        count++;
    }

    // pop(): Remove the front element
    void pop() {
        if (empty()) {
            std::cerr << "Queue underflow. Cannot pop.\n";
            return;
        }
        Node* temp = frontNode;
        frontNode = frontNode->next;
        if (!frontNode) {
            rearNode = nullptr;
        }
        delete temp;
        count--;
    }

    // front(): Return the front element
    T front() {
        if (empty()) {
            std::cerr << "Queue is empty. Cannot access front.\n";
            exit(EXIT_FAILURE); // or throw exception
        }
        return frontNode->data;
    }

    // size(): Return number of elements
    int size() {
        return count;
    }

    // empty(): Check if queue is empty
    bool empty() {
        return frontNode == nullptr;
    }
};

int main() {
    Queue<int> q;
    
    q.push(10);
    q.push(20);
    q.push(30);

    std::cout << "Front: " << q.front() << "\n"; // 10
    std::cout << "Size: " << q.size() << "\n";   // 3

    q.pop();
    std::cout << "Front after pop: " << q.front() << "\n"; // 20
    std::cout << "Is empty: " << (q.empty() ? "Yes" : "No") << "\n"; // No

    return 0;
}