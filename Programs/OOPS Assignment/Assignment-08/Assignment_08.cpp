#include <iostream>

using namespace std;

// Assignment - Type Casting and Ternary Operator

int main()
{
    int playerHealth;
    cout << "Enter player health : ";
    cin >> playerHealth;

    short playerCode;
    playerCode = playerHealth;

    cout << "Size of Player Health : " << sizeof(playerHealth) << endl;
    cout << "Size of Player Code : " << sizeof(playerCode) << endl;
}