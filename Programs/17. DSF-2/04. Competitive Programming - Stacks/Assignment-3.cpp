#include <iostream>
#include <vector>
#include <stack>
#include <string>
using namespace std;

// Assignment - 3 : Practice Problem - Stacks - 3 : Baseball Game

int calPoints(vector<string>& ops) {
    stack<int> record;
    
    for (const string& op : ops) {
        if (op == "C") {
            // Discard the previous score
            if (!record.empty()) {
                record.pop();
            }
        } else if (op == "D") {
            // Double the previous score
            if (!record.empty()) {
                record.push(record.top() * 2);
            }
        } else if (op == "+") {
            // Sum the last two scores
            if (record.size() >= 2) {
                int top1 = record.top();
                record.pop();
                int top2 = record.top();
                record.push(top2);
                record.push(top1 + top2);
            }
        } else {
            // It's an integer score, push it to the stack
            record.push(stoi(op));
        }
    }
    
    // Calculate the sum of the scores in the stack
    int total = 0;
    while (!record.empty()) {
        total += record.top();
        record.pop();
    }
    
    return total;
}

int main() {
    vector<string> ops1 = {"5","2","C","D","+"};
    vector<string> ops2 = {"1","C"};
    
    cout << "Example 1 Result: " << calPoints(ops1) << endl;  // Output: 30
    cout << "Example 2 Result: " << calPoints(ops2) << endl;  // Output: 0
    
    return 0;
}