#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Function to sort the array using insertion sort algorithm.
void processSelectionSort(int arr[], int n)
{
    int minIndex, temp; // Declare variables outside the loop

    for (int i = 0; i < n - 1; i++)
    {
        minIndex = i; // Assume the current index is the minimum
        for (int j = i + 1; j < n; j++)
            if (arr[j] < arr[minIndex])
                minIndex = j; // Update index of the smallest element
        // Swap the found minimum element with the first element of the unsorted part
        if (minIndex != i)
        {
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
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
    processSelectionSort(arr, n);
    cout << "Sorted array: ";
    displayArray(arr, n);
    delete[] arr; // Deallocate dynamically allocated memory
    return 0;
}