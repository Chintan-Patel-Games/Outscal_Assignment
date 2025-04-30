#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Function to sort the array using bubble sort algorithm.
void processBubbleSort(int arr[], int n)
{
    bool swapped;
    int temp;

    for (int i = 0; i < n - 1; i++)
    {
        swapped = false; // reset for each pass

        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // swap the elements
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }

        if (!swapped) break; // early exit if no swap occurred
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
    processBubbleSort(arr, n);
    cout << "Sorted array: ";
    displayArray(arr, n);
    delete[] arr; // Deallocate dynamically allocated memory
    return 0;
}