#include <iostream>
#include <string>
#include <unordered_set>

// Assignment - 1 : Reverse Vowels of a String

using namespace std;

bool isVowel(char ch) {
    unordered_set<char> vowels = {'a','e','i','o','u','A','E','I','O','U'};
    return vowels.count(ch) > 0;
}

string reverseVowels(string s) {
    int left = 0, right = s.length() - 1;

    while (left < right) {
        while (left < right && !isVowel(s[left])) left++;
        while (left < right && !isVowel(s[right])) right--;

        if (left < right) {
            swap(s[left], s[right]);
            left++;
            right--;
        }
    }

    return s;
}

int main() {
    string s;
    cout << "Enter the string: ";
    getline(cin, s);

    string result = reverseVowels(s);
    cout << "Output: " << result << endl;

    return 0;
}