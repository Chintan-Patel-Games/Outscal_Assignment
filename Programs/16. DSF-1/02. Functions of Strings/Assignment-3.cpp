#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string s, t;
    cout << "Enter first string: ";
    cin >> s;
    cout << "Enter second string: ";
    cin >> t;

    // If lengths are different, they can't be anagrams
    if (s.length() != t.length()) {
        cout << "false" << endl;
        return 0;
    }

    // Sort both strings
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    // Compare sorted strings
    if (s == t)
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}