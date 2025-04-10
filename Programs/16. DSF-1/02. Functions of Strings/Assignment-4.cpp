#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter the string: ";
    cin >> str;

    // ASCII array to store frequency of each character
    int freq[256] = {0};

    // Count frequency of each character
    for (char ch : str) {
        freq[(int)ch]++;
    }

    // Print non-zero frequencies
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            cout << (char)i << " - " << freq[i] << endl;
        }
    }

    return 0;
}