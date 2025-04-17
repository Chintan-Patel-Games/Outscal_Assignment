#include <iostream>
#include <queue>
#include <vector>

// Assignment - 3 : Time to needed buy tickets

using namespace std;

int timeToBuyTickets(vector<int>& tickets, int k) {
    int time = 0;  // Time counter
    
    // Simulate the queue
    while (tickets[k] > 0) {
        for (int i = 0; i < tickets.size(); ++i) {
            // If the person still has tickets left
            if (tickets[i] > 0) {
                // One second is passed
                tickets[i]--;
                time++;
                
                // If the person at position k finishes buying their tickets
                if (i == k && tickets[i] == 0) {
                    return time;
                }
            }
        }
    }

    return time;  // This will return the time when the person at position k finishes
}

int main() {
    // Example 1
    vector<int> tickets = {2, 3, 2};
    int k = 2;
    cout << "Time for person at position " << k << " to buy all tickets: " << timeToBuyTickets(tickets, k) << endl;

    // Example 2
    tickets = {5, 1, 1, 1};
    k = 0;
    cout << "Time for person at position " << k << " to buy all tickets: " << timeToBuyTickets(tickets, k) << endl;

    return 0;
}