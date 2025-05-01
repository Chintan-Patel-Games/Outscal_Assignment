#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Function to partition the array and return the pivot index.
int partition(int arr[], int low, int high)
{
    int pivot = arr[high]; // pivot element
    int i = low - 1;        // index of smaller element

    for (int j = low; j < high; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]); // place pivot in correct position
    return i + 1;
}

// Function to recursively sort the array using Quick Sort.
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pivotIndex = partition(arr, low, high); // get pivot index
        quickSort(arr, low, pivotIndex - 1);        // sort left part
        quickSort(arr, pivotIndex + 1, high);       // sort right part
    }
}

// Function to initiate the Quick Sort process.
void processQuickSort(int arr[], int n)
{
    quickSort(arr, 0, n - 1);
}

// Function to display the array.
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
    processQuickSort(arr, n);
    cout << "Sorted array: ";
    displayArray(arr, n);
    delete[] arr; // Deallocate dynamically allocated memory
    return 0;
}