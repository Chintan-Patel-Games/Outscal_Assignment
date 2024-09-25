#include <iostream>

using namespace std;

// Assignment - 4 : Type Casting and Ternary Operator

int main()
{
    int playerHealth;
    cout << "Enter player health : ";
    cin >> playerHealth;

    short playerCode;
    playerCode = playerHealth;

    cout << "Size of Player Health : " << sizeof(playerHealth) << " bytes" << endl;
    cout << "Size of Player Code : " << sizeof(playerCode) << " bytes" << endl;
}