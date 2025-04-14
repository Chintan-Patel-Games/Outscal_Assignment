#include <iostream>
#include <cctype> // for isalpha and isdigit
using namespace std;

// Stack implementation using linked list for characters
class Stack {
private:
    struct Node {
        char data;
        Node* next;
        Node(char val) : data(val), next(nullptr) {}
    };

    Node* top;

public:
    Stack() : top(nullptr) {}

    ~Stack() {
        while (!IsEmpty()) Pop();
    }

    void Push(char x) {
        Node* newNode = new Node(x);
        newNode->next = top;
        top = newNode;
    }

    void Pop() {
        if (IsEmpty()) return;
        Node* temp = top;
        top = top->next;
        delete temp;
    }

    char Peek() {
        if (IsEmpty()) return '\0';
        return top->data;
    }

    bool IsEmpty() {
        return top == nullptr;
    }
};

// Utility functions
int Precedence(char op) {
    if (op == '^') return 3;
    else if (op == '*' || op == '/') return 2;
    else if (op == '+' || op == '-') return 1;
    return 0;
}

bool IsRightAssociative(char op) {
    return op == '^';
}

bool IsOperator(char ch) {
    return ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^';
}

// Function to convert infix to postfix
string InfixToPostfix(const string& infix) {
    Stack s;
    string postfix;

    for (char ch : infix) {
        if (isalnum(ch)) {
            postfix += ch;
        }
        else if (ch == '(') {
            s.Push(ch);
        }
        else if (ch == ')') {
            while (!s.IsEmpty() && s.Peek() != '(') {
                postfix += s.Peek();
                s.Pop();
            }
            if (!s.IsEmpty() && s.Peek() == '(') s.Pop(); // Remove '('
        }
        else if (IsOperator(ch)) {
            while (!s.IsEmpty() && IsOperator(s.Peek())) {
                char topOp = s.Peek();
                if ((Precedence(topOp) > Precedence(ch)) ||
                    (Precedence(topOp) == Precedence(ch) && !IsRightAssociative(ch))) {
                    postfix += topOp;
                    s.Pop();
                }
                else break;
            }
            s.Push(ch);
        }
    }

    // Pop any remaining operators
    while (!s.IsEmpty()) {
        postfix += s.Peek();
        s.Pop();
    }

    return postfix;
}

// Main function
int main() {
    string infix = "a+b*(c^d-e)^(f+g*h)-i";
    string postfix = InfixToPostfix(infix);
    cout << "Postfix Expression: " << postfix << endl;
    return 0;
}