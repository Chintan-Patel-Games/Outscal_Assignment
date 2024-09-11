#include <iostream>

using namespace std;

void Shooting() { cout << "Player is shooting" << endl; }

void Healing() { cout << "Player is healing" << endl; }

void Attacking() { cout << "Player is attacking" << endl; }

int main()
{
    // Assignment - 7 : Understanding all types of Loops

    // Task - 1

    for (int i = 1; i <= 10; i++)
    {
        cout << i << ". ";
        Shooting();
    }
    cout << "\n";

    // Task - 2

    int j = 1;
    while (j <= 5)
    {
        cout << j << ". ";
        Healing();
        j++;
    }
    cout << "\n";

    // Task - 3

    int k = 1;
    do
    {
        cout << k << ". ";
        Attacking();
        k++;
    } while (k <= 7);
    cout << "\n";
}