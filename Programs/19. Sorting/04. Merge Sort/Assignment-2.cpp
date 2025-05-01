#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()
using namespace std;

// Function to merge two sorted halves of the array into a single sorted array.
void merge(int arr[], int left, int mid, int right)
{
    int n1 = mid - left + 1;  // Size of left sub-array
    int n2 = right - mid;     // Size of right sub-array

    // Create temporary arrays
    int* L = new int[n1];
    int* R = new int[n2];

    // Copy data to temp arrays L[] and R[]
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    // Merge the temp arrays back into arr[left..right]
    int i = 0, j = 0, k = left;  // Initial indexes

    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
            arr[k++] = L[i++];
        else
            arr[k++] = R[j++];
    }

    // Copy the remaining elements of L[], if any
    while (i < n1)
        arr[k++] = L[i++];

    // Copy the remaining elements of R[], if any
    while (j < n2)
        arr[k++] = R[j++];

    // Free memory
    delete[] L;
    delete[] R;
}

// Function to recursively divide the array and merge the sorted halves.
void mergeSort(int arr[], int left, int right)
{
    if (left < right)
    {
        int mid = left + (right - left) / 2;

        // Sort first and second halves
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Merge the sorted halves
        merge(arr, left, mid, right);
    }
}

// Function to initiate the merge sort process.
void processMergeSort(int arr[], int n)
{
    mergeSort(arr, 0, n - 1);
}

void displayArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Function to dynamically allocate an array and fill it with random values.
void fillDynamicArrayWithRandomValues(int** arr, int* n)
{
    cout << "Enter the size of the array: ";
    cin >> *n;
    *arr = new int[*n];
    srand(time(0)); // Seed for random number generation
    for (int i = 0; i < *n; i++)
        (*arr)[i] = rand() % 1000; // Fill with random numbers between 0 and 999
}

int main()
{
    int* arr;
    int n;
    fillDynamicArrayWithRandomValues(&arr, &n);
    cout << "Unsorted array: ";
    displayArray(arr, n);
    processMergeSort(arr, n);
    cout << "Sorted array: ";
    displayArray(arr, n);
    delete[] arr; // Deallocate dynamically allocated memory
    return 0;
}