#include <iostream>

using namespace std;

// Assignment - Enemy Health (Pointers)

int main()
{
    int enemyHealth;

    cout << "Enter enemy health : ";
    cin >> enemyHealth;

    int *p = &enemyHealth;
    int *q = &enemyHealth;

    cout << "The value of p : " << p << endl;
    cout << "The value of q : " << q << endl;

    cout << "The value stored in p pointer : " << *p << endl;
    cout << "The value stored in q pointer : " << *q << endl;

    cout << "The value of enemy health : " << enemyHealth << endl;

    cout << "Enter enemy health : ";
    cin >> enemyHealth;

    cout << "The value stored in p pointer : " << *p << endl;
    cout << "The value stored in q pointer : " << *q << endl;

    cout << "The value of enemy health : " << enemyHealth << endl;
}