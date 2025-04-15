#include <iostream>
#include <vector>
#include <stack>
using namespace std;

// Assignment - 2 : Practice Problem - Stacks - 2 : Daily Temperatures

vector<int> dailyTemperatures(vector<int>& temperatures) {
    int n = temperatures.size();
    vector<int> ans(n, 0);  // Initialize the result array with 0
    stack<int> s;  // Stack to store indices of temperatures
    
    for (int i = 0; i < n; ++i) {
        // While the stack is not empty and the current temperature is greater
        // than the temperature at the index stored in the stack's top
        while (!s.empty() && temperatures[i] > temperatures[s.top()]) {
            int index = s.top();  // Get the index of the temperature to compare
            s.pop();  // Pop the index from the stack
            ans[index] = i - index;  // Calculate the number of days until warmer temp
        }
        s.push(i);  // Push the current index onto the stack
    }
    
    return ans;  // Return the result array
}

int main() {
    vector<int> temperatures = {73, 74, 75, 71, 69, 72, 76, 73};
    vector<int> ans = dailyTemperatures(temperatures);
    
    cout << "Result: [ ";
    for (int i : ans) {
        cout << i << " ";
    }
    cout << "]" << endl;
    
    return 0;
}