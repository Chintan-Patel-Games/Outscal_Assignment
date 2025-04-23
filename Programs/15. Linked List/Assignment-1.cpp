#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;

    Node() : data(0), next(nullptr) {} // default constructor
    Node(int val) : data(val), next(nullptr) {} // parameterized constructor
};

class CircularLinkedList
{
private:
    Node* head_node;
public:
    CircularLinkedList() : head_node(nullptr) {}
    
    void insertAtEnd(int value);
    void insertAtBeginning(int value);
    void deleteFromEnd();
    void deleteFromBeginning();
    void traverse();
    void findTheMiddle();
    void insertAtIndex(int index, int value);
    void deleteFromIndex(int index);
    void reverse();
};

void CircularLinkedList::insertAtEnd(int value)
{
    Node* newNode = new Node(value);
    if (!head_node)
    {
        head_node = newNode;
        newNode->next = head_node; // Bcoz its Circular LinkedList
        return;
    }
    Node* temp = head_node;
    while (temp->next != head_node)
        temp = temp->next;
    temp->next = newNode;
    newNode->next = head_node;
}

void CircularLinkedList::insertAtBeginning(int value)
{
    Node* newNode = new Node(value);
    if (!head_node)
    {
        head_node = newNode;
        newNode->next = head_node; // Again Bcoz its Circular LinkedList
        return;
    }
    Node* temp = head_node;
    while (temp->next != head_node)
        temp = temp->next;
    temp->next = newNode;
    newNode->next = head_node;
    head_node = newNode;
}

void CircularLinkedList::deleteFromEnd()
{
    if (!head_node) return;
    if (head_node->next == head_node)
    {
        delete head_node;
        head_node = nullptr;
        return;
    }
    Node* temp = head_node;
    while (temp->next->next != head_node)
        temp = temp->next;
    delete temp->next;
    temp->next = head_node;
}

void CircularLinkedList::deleteFromBeginning()
{
    if (!head_node) return;
    if (head_node->next == head_node)
    {
        delete head_node;
        head_node = nullptr;
        return;
    }
    Node* temp = head_node;
    while (temp->next != head_node)
        temp = temp->next;
    Node* toDelete = head_node;
    head_node = head_node->next;
    temp->next = head_node;
    delete toDelete;
}

void CircularLinkedList::traverse()
{
    if (!head_node)
    {
        cout << "List is empty" << endl;
        return;
    }
    Node* temp = head_node;
    do
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != head_node);
    cout << "(head)" << endl;
}

void CircularLinkedList::findTheMiddle()
{
    if (!head_node) return;
    Node* slow = head_node;
    Node* fast = head_node;
    while (fast->next != head_node && fast->next->next != head_node)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    cout << "Middle Element: " << slow->data << endl;
}

void CircularLinkedList::insertAtIndex(int index, int value)
{
    if (index < 0)
    {
        cout << "Incorrect index." << endl;
        return;
    }
    if (index == 0)
    {
        insertAtBeginning(value);
        return;
    }
    Node* newNode = new Node(value);
    Node* temp = head_node;
    for (int i = 0; temp->next != head_node && i < index - 1; i++)
        temp = temp->next;
    newNode->next = temp->next;
    temp->next = newNode;
}

void CircularLinkedList::deleteFromIndex(int index) {
    if (index < 0)
    {
        cout << "Incorrect index." << endl;
        return;
    }
    if (!head_node) return;
    if (index == 0)
    {
        deleteFromBeginning();
        return;
    }
    Node* temp = head_node;
    for (int i = 0; temp->next != head_node && i < index - 1; i++)
        temp = temp->next;
    Node* toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;
}

void CircularLinkedList::reverse()
{
    if (!head_node || head_node->next == head_node) return;
    Node* prev = nullptr;
    Node* current = head_node;
    Node* next = nullptr;
    Node* last = head_node;
    do
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    } while (current != head_node);
    head_node->next = prev;
    head_node = prev;
}

int main()
{
    CircularLinkedList cll;
    cll.insertAtEnd(1);
    cll.insertAtEnd(2);
    cll.insertAtEnd(3);
    cll.insertAtEnd(4);
    cll.insertAtEnd(5);
    
    cout << "Original List: ";
    cll.traverse();

    cll.insertAtBeginning(0);
    cout << "After inserting at beginning: ";
    cll.traverse();

    cll.deleteFromEnd();
    cout << "After deleting from end: ";
    cll.traverse();

    cll.deleteFromBeginning();
    cout << "After deleting from beginning: ";
    cll.traverse();

    cll.insertAtIndex(2, 10);
    cout << "After inserting at index 2: ";
    cll.traverse();

    cll.deleteFromIndex(2);
    cout << "After deleting from index 2: ";
    cll.traverse();

    cll.findTheMiddle();

    cll.reverse();
    cout << "After reversing: ";
    cll.traverse();

    return 0;
}