#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>
using namespace std;

// Counting Sort based on digit at the given exponent place
void countSort(int arr[], int n, int exponent)
{
    int* output = new int[n];
    int count[10] = {0};

    // Count occurrences of digits
    for (int i = 0; i < n; i++)
    {
        int digit = (arr[i] / exponent) % 10;
        count[digit]++;
    }

    // Convert count[] to prefix sums
    for (int i = 1; i < 10; i++)
        count[i] += count[i - 1];

    // Build the output array (must be stable)
    for (int i = n - 1; i >= 0; i--)
    {
        int digit = (arr[i] / exponent) % 10;
        output[count[digit] - 1] = arr[i];
        count[digit]--;
    }

    // Copy sorted output to original array
    for (int i = 0; i < n; i++)
        arr[i] = output[i];
}

// Radix Sort for non-negative numbers
void radixSort(int arr[], int n)
{
    int maxVal = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maxVal)
            maxVal = arr[i];
    }

    // Apply counting sort for each digit (1s, 10s, 100s, ...)
    for (int exponent = 1; maxVal / exponent > 0; exponent *= 10)
        countSort(arr, n, exponent);
}

// Main process function handling both negative and non-negative numbers
void processRadixSort(int arr[], int n)
{
    vector<int> negatives, nonNegatives;

    // Separate negative and non-negative values
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
            negatives.push_back(-arr[i]);  // make positive for radix sort
        else
            nonNegatives.push_back(arr[i]);
    }

    // Sort both arrays
    if (!negatives.empty())
        radixSort(negatives.data(), negatives.size());
    if (!nonNegatives.empty())
        radixSort(nonNegatives.data(), nonNegatives.size());

    // Merge back into arr: negatives in reverse (restored as negative), then non-negatives
    int idx = 0;
    for (int i = negatives.size() - 1; i >= 0; i--)
        arr[idx++] = -negatives[i];
    for (int i = 0; i < nonNegatives.size(); i++)
        arr[idx++] = nonNegatives[i];
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
    processRadixSort(arr, n);
    cout << "Sorted array: ";
    displayArray(arr, n);
    delete[] arr; // Deallocate dynamically allocated memory
    return 0;
}