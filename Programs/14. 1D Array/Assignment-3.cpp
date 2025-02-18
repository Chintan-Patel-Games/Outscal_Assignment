#include <iostream>
#include <vector>
using namespace std;

// Assignment - 📝Delete an Element from Array

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int elementToDelete;
    cout << "Enter the element to delete: ";
    cin >> elementToDelete;

    bool found = false;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == elementToDelete) {
            found = true;
            for (int j = i; j < n - 1; ++j) {
                arr[j] = arr[j + 1];
            }
            arr.pop_back();
            break;
        }
    }

    if (found) {
        cout << "Updated array: ";
        for (int i = 0; i < arr.size(); ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    } else {
        cout << "Element not found. No deletion performed." << endl;
    }

    return 0;
}