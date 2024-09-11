#include <iostream>

using namespace std;

int health = 100;
float attack = 20;
int defence = 5;
int healingPower = 20;

void TakeDamage(int damageToInflict)
{
    health -= damageToInflict;
    if (health < 0)
    {
        health = 0;
    }
}

void Heal(int healthToRecover)
{
    health += healthToRecover;
    if (health > 100)
    {
        health = 100;
    }
}

void DamageMultiplier(float multiplier)
{
    attack = attack * multiplier;
}

int main()
{
    // Assignment - 6 : Creating Player behaviour

    // Task - 1

    cout << "Player health : " << health << endl;
    cout << "Player attack : " << attack << endl;
    cout << "Player defence : " << defence << endl;
    cout << "Player healing : " << healingPower << endl;
    cout << "-----------------------------------" << endl;

    // Task - 2

    cout << "Player health before taking damage : " << health << endl;
    cout << "Player took 200 damage." << endl;
    TakeDamage(200);
    cout << "Player health after taking damage : " << health << endl;
    cout << "-----------------------------------" << endl;

    // Task - 3

    cout << "Player health before taking heal : " << health << endl;
    cout << "Player replenised 200 health." << endl;
    Heal(200);
    cout << "Player health after taking heal : " << health << endl;
    cout << "-----------------------------------" << endl;

    // Task - 4

    cout << "Player attack before damage multiplier : " << attack << endl;
    cout << "Player equiped damage multiplier of 0.5." << endl;
    DamageMultiplier(0.5);
    cout << "Player attack after damage multiplier : " << attack << endl;
    cout << "-----------------------------------" << endl;
}