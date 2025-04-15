#include <iostream>
#include <queue>
using namespace std;

// Assignment - 1 : Queue Traversal

int main() {
    queue<int> q;

    // Insert 5 integers into the queue
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    // Print the queue elements
    while (!q.empty()) {
        cout << q.front();
        q.pop();
        if (!q.empty()) cout << ", ";
    }

    return 0;
}