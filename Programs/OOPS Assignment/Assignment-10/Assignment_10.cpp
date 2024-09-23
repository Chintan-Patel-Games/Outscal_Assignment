#include <iostream>

using namespace std;

// Assignment - Player Health (Pointers)

int main()
{
    int playerHealth;
    cout << "Enter player health : ";
    cin >> playerHealth;

    int *p;
    p = &playerHealth;

    cout << "The value of p : " << p << endl;
    cout << "The value stored in pointer : " << *p <<  endl;
    cout << "The value of player health : " << playerHealth <<  endl;

    cout << "Enter player health in pointer : ";
    cin >> *p;
    
    cout << "The value stored in pointer : " << *p <<  endl;
    cout << "The value of player health : " << playerHealth <<  endl;
}