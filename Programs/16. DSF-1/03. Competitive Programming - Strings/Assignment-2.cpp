#include <iostream>
#include <string>
#include <vector>

// Asignment - 2 : First Unique Character in a String

using namespace std;

int firstUniqChar(string s) {
    vector<int> freq(26, 0);

    // Count frequency of each character
    for (char ch : s) {
        freq[ch - 'a']++;
    }

    // Find the index of the first unique character
    for (int i = 0; i < s.length(); i++) {
        if (freq[s[i] - 'a'] == 1) {
            return i;
        }
    }

    return -1;
}

int main() {
    string s;
    cout << "Enter the string: ";
    cin >> s;

    int result = firstUniqChar(s);
    cout << "Output: " << result << endl;

    return 0;
}