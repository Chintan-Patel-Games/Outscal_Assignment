#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Function to sort the array using the insertion sort algorithm.
void processInsertionSort(int arr[], int n)
{
    int key, j;

    for (int i = 1; i < n; i++)
    {
        key = arr[i]; // Current element to insert into the sorted portion
        j = i - 1;
        
        // Shift elements that are greater than the key to the right
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j]; // Shift element to the right
            j--;
        }
        
        // Insert the key into its correct position
        arr[j + 1] = key;
    }
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
    processInsertionSort(arr, n);
    cout << "Sorted array: ";
    displayArray(arr, n);
    delete[] arr; // Deallocate dynamically allocated memory
    return 0;
}