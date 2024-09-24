#include <iostream>

using namespace std;

int main()
{
    // Assignment - 2 : Logical Operator

    int playerHealth = 10;
    int playerPos = 5;
    int enemyRange = 10;
    bool playerAttack = false;
    bool playerDefend = true;

    // Task - 1

    if (playerPos <= enemyRange && playerAttack)
    {
        cout << "the enemy should attack";
    }

    // Task - 2

    if (playerPos <= enemyRange && playerDefend)
    {
        cout << "the enemy should hold";
    }

    // Task - 3

    if (playerPos <= enemyRange && playerHealth <= 20 && playerAttack)
    {
        cout << "Player should deliver rage attack";
    }

    // Task - 4

    if (playerPos <= enemyRange && !playerDefend && (playerHealth == 100 || playerHealth <= 10))
    {
        cout << "Enemy should do a special ability attack";
    }
}