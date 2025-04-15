#include <iostream>
#include <stack>
#include <string>
#include <cctype>
using namespace std;

// Assignment -3 : Prefix to Infix

// Function to check if character is operator
bool isOperator(char ch) {
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^');
}

// Convert Prefix to Infix
string prefixToInfix(const string& prefix) {
    stack<string> st;

    // Traverse the expression from right to left
    for (int i = prefix.length() - 1; i >= 0; --i) {
        char ch = prefix[i];

        // Skip spaces
        if (ch == ' ') continue;

        if (isOperator(ch)) {
            // Pop two operands
            string op1 = st.top(); st.pop();
            string op2 = st.top(); st.pop();

            // Combine into new expression
            string expr = "( " + op1 + " " + ch + " " + op2 + " )";
            st.push(expr);
        } else {
            // Operand (may be a letter or digit)
            st.push(string(1, ch));
        }
    }

    // Final expression in the stack
    return st.top();
}

int main() {
    string prefix1 = "* + A B - C D";
    string prefix2 = "* - A / B C - / A K L";

    cout << "Infix: " << prefixToInfix(prefix1) << endl;
    cout << "Infix: " << prefixToInfix(prefix2) << endl;

    return 0;
}