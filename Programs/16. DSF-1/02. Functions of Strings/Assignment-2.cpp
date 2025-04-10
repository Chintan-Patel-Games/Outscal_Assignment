#include <iostream>
#include <string>
#include <algorithm>

// Asignment -2 : Palindrome

using namespace std;

int main() {
    string str;
    cout << "Enter the string: ";
    cin >> str;

    string reversed = str;
    reverse(reversed.begin(), reversed.end());

    if (str == reversed)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}