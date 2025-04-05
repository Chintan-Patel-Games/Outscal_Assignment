#include <iostream>
using namespace std;

// Node class represents a node in a linked list
class Node {
public:
    int data;       // Data stored in the node
    Node* next;     // Pointer to the next node in the list
};

// Function to detect a loop in the linked list
bool detectCycle(Node* head) {
    Node* slow = head;
    Node* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;           // Move slow by one
        fast = fast->next->next;     // Move fast by two

        if (slow == fast) {
            return true;  // Loop detected
        }
    }

    return false;  // No loop
}

int main() {
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();
    Node* fourth = new Node();
    Node* fifth = new Node();

    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = fourth;
    fourth->data = 4;
    fourth->next = fifth;
    fifth->data = 5;
    fifth->next = third; // creates a loop

    if (detectCycle(head)) {
        cout << "Loop detected in the linked list." << endl;
    }
    else {
        cout << "No loop detected in the linked list." << endl;
    }

    return 0;
}