#include <iostream>

using namespace std;

int main()
{
    // Assignment - 8

    int n;
    int i;
    int result = 1;

    cout << "Enter any number : ";
    cin >> n;

    for (i = 1; i < n; i++)
    {
        result = i + (result + 1);
    }
    
    cout << "Sum of n numbers of natural number : " << result << endl;
}