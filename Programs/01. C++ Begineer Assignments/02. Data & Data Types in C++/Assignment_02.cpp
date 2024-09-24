#include <iostream>

using namespace std;

int main()
{
    // Assignment - 2 : Handling Data in C++

    int playerHealth;
    int livesCount;
    double playerId;
    float winPercentage;
    bool playerWon;
    char playerType;

    cout << "Enter player health: ";
    cin >> playerHealth;
    cout << "Enter lives count: ";
    cin >> livesCount;
    cout << "Enter player id: ";
    cin >> playerId;
    cout << "Enter win percentage: ";
    cin >> winPercentage;
    cout << "Enter player won/lose: ";
    cin >> playerWon;
    cout << "Enter player type: ";
    cin >> playerType;

    cout << "---------------------------------" << endl;

    cout << "Player health is: " << playerHealth << endl;
    cout << "Lives count is: " << livesCount << endl;
    cout << "Player id is: " << playerId << endl;
    cout << "Win percentage is: " << winPercentage << endl;
    cout << "Game result: " << playerWon << endl;
    cout << "Player type is: " << playerType << endl;
}