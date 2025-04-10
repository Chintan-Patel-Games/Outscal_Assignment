#include <iostream>
#include <string>
#include <cmath>  // for abs()

// Assignment - 3 : Score of a String

using namespace std;

int getStringScore(const string& s) {
    int score = 0;
    for (int i = 1; i < s.length(); ++i) {
        score += abs(s[i] - s[i - 1]);
    }
    return score;
}

int main() {
    string s;
    cout << "Enter the string: ";
    cin >> s;

    int result = getStringScore(s);
    cout << "Output: " << result << endl;

    return 0;
}