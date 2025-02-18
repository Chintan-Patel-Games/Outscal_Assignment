#include <iostream>
#include <vector>
using namespace std;

// Assignment - 📝Peak Element

void findPeakElements(const vector<int>& arr, int N) {
    for (int i = 0; i < N; ++i) {
        if ((i == 0 || arr[i] >= arr[i - 1]) && (i == N - 1 || arr[i] >= arr[i + 1])) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int N;
    cout << "Enter the size of the array (N): ";
    cin >> N;

    vector<int> arr(N);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    cout << "The indices of the peak elements are: ";
    findPeakElements(arr, N);

    return 0;
}