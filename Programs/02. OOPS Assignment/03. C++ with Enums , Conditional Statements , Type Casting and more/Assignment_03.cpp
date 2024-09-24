#include <iostream>

using namespace std;

// Assignment - 3 : Switch

int main()
{
    int playerChoice;
    cout << "1. Tanker" << endl;
    cout << "2. Attacker" << endl;
    cout << "3. Healer" << endl;
    cout << "Select your hero class between 1-3 : " << endl;
    cin >> playerChoice;
    switch (playerChoice)
    {
    case 1:
        cout << "Your Hero class will be Tank." << endl;
        break;

    case 2:
        cout << "Your Hero class will be Attacker." << endl;
        break;

    case 3:
        cout << "Your Hero class will be Healer." << endl;
        break;

    default:
        cout << "Incorrect Hero class. Please select your Hero class between 1-3." << endl;
        break;
    }
}