#include <iostream>

using namespace std;

// Assignment - 2 : Pyramid Star Pattern using Loops

int main()
{
    for (int i = 1; i <= 7; i++)
    {
        if (i % 2 == 0)
            continue;
        else
        {
            for (int k = i; k <= 7; k++)
            {
                if (k % 2 == 0)
                    continue;
                else
                    cout << " ";
            }
            for (int j = 1; j <= i; j++)
            {
                cout << "*";
            }
            cout << "\n";
        }
    }
}