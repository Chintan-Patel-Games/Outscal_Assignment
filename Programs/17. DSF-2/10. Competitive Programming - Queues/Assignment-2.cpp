#include <iostream>
#include <queue>
#include <vector>

// Assignmnet - 1 : Students unable to eat lunch

using namespace std;

int countStudents(vector<int>& students, vector<int>& sandwiches) {
    // Create a queue to simulate the students' queue
    queue<int> studentQueue;
    for (int student : students) {
        studentQueue.push(student);
    }

    int i = 0;  // This will track the current sandwich index
    int count = 0;  // This will count how many times no student eats a sandwich

    while (i < sandwiches.size()) {
        int student = studentQueue.front();  // The student at the front of the queue
        studentQueue.pop();

        if (student == sandwiches[i]) {
            // If the student likes the sandwich, they take it
            i++;
            count = 0;  // Reset the count since a student ate
        } else {
            // If the student does not like the sandwich, they go to the back of the queue
            studentQueue.push(student);
            count++;  // Increment the count of students who didn't take a sandwich
        }

        // If all students have passed through once, and no one wants the sandwich,
        // we break because no one will be able to eat anymore.
        if (count == studentQueue.size()) {
            break;
        }
    }

    return studentQueue.size();  // Return the number of students who couldn't eat
}

int main() {
    // Example 1
    vector<int> students = {1,1,1,0,0,1};
    vector<int> sandwiches = {1,0,0,0,1,1};
    cout << "Number of students who cannot eat: " << countStudents(students, sandwiches) << endl;

    // Example 2
    students = {1,1,0,0};
    sandwiches = {0,1,0,1};
    cout << "Number of students who cannot eat: " << countStudents(students, sandwiches) << endl;

    return 0;
}