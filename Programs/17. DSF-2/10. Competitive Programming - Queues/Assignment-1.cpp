#include <iostream>
using namespace std;

// Assignmnet - 1 : Find the num of cards

int find_last_card(int N) {
    // Josephus Problem iterative solution
    int last_card = 0;  // This is the 0-indexed position of the last remaining card when N = 1
    
    for (int i = 2; i <= N; ++i) {
        last_card = (last_card + 2) % i;  // Update the position of the last remaining card
    }
    
    return last_card + 1;  // Convert to 1-indexed
}

int main() {
    int N;
    cout << "N = ";
    cin >> N;  // Input the number of cards
    cout << "ans = " << find_last_card(N) << endl;  // Output the result
    return 0;
}