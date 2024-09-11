#include <iostream>

using namespace std;

int main()
{
    // Assignment - 4 : Conditional Statements

    int playerHealth = 70;
    int enemyHealth = 0;

    // Task - 1

    if (playerHealth > enemyHealth)
    {
        cout << "Player has more health" << endl;
    }
    else
    {
        cout << "Enemey has more health" << endl;
    }

    if (playerHealth == enemyHealth)
    {
        cout << "Player and enemy have same health" << endl;
    }

    // Task - 2

    if (playerHealth == 100)
    {
        cout << "Player has full health" << endl;
    }
    else if (playerHealth == 50)
    {
        cout << "Player has half health" << endl;
    }
    else if (playerHealth == 0)
    {
        cout << "Player is dead" << endl;
    }

    // Task - 3

    if (playerHealth > 0)
    {
        if (enemyHealth == 100)
        {
            cout << "Enemy has full health" << endl;
        }
        else if (enemyHealth == 50)
        {
            cout << "Enemy has half health" << endl;
        }
        else if (enemyHealth == 0)
        {
            cout << "Enemy is dead" << endl;
        }
    }

    // Task - 4

    string result1 = (playerHealth == 0 || enemyHealth == 0)
                         ? "Game Over : Player Won"
                         : "Game Over : Player Lost";
    cout << result1 << endl;

    // Task - 5

    string result2 = (playerHealth == 0 && enemyHealth == 0)
                         ? "Game Over : Match Draw"
                         : "Game not over";
    cout << result2 << endl;
}