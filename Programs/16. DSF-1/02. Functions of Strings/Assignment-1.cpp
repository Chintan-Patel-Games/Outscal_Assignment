#include <iostream>
#include <unordered_map>
#include <string>
#include <algorithm>

// Assignment - 1 : Find Duplicate

using namespace std;

int main() {
    string str;
    cout << "Enter the string: ";
    cin >> str;

    unordered_map<char, int> freq;
    for (char ch : str) {
        freq[ch]++;
    }

    string result = "";
    for (auto pair : freq) {
        if (pair.second > 1) {
            result += pair.first;
        }
    }

    // Optional: Sort the result if you want it in a consistent order
    sort(result.begin(), result.end());

    cout << "Duplicate characters: " << result << endl;

    return 0;
}