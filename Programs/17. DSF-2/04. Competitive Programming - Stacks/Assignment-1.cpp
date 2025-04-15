#include <iostream>
#include <vector>
#include <stack>
#include <unordered_map>
using namespace std;

// Assignment -1 : Practice Problem - Stacks - 1 : Next Greater Element

vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    stack<int> s;
    unordered_map<int, int> nextGreaterMap;
    
    // Traverse nums2 from right to left
    for (int i = nums2.size() - 1; i >= 0; --i) {
        // Pop elements from the stack that are less than or equal to the current element
        while (!s.empty() && s.top() <= nums2[i]) {
            s.pop();
        }
        
        // If stack is not empty, the top element is the next greater element
        if (!s.empty()) {
            nextGreaterMap[nums2[i]] = s.top();
        } else {
            nextGreaterMap[nums2[i]] = -1;
        }
        
        // Push the current element onto the stack
        s.push(nums2[i]);
    }
    
    // Prepare the result for nums1
    vector<int> result;
    for (int num : nums1) {
        result.push_back(nextGreaterMap[num]);
    }
    
    return result;
}

int main() {
    // Test cases
    vector<int> nums1 = {4, 1, 2};
    vector<int> nums2 = {1, 3, 4, 2};
    vector<int> result = nextGreaterElement(nums1, nums2);
    
    cout << "Result: [ ";
    for (int i : result) {
        cout << i << " ";
    }
    cout << "]" << endl;

    vector<int> nums1_2 = {2, 4};
    vector<int> nums2_2 = {1, 2, 3, 4};
    vector<int> result_2 = nextGreaterElement(nums1_2, nums2_2);
    
    cout << "Result: [ ";
    for (int i : result_2) {
        cout << i << " ";
    }
    cout << "]" << endl;

    return 0;
}