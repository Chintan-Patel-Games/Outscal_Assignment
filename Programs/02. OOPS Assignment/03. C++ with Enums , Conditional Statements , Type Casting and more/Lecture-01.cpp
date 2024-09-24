#include <iostream>

using namespace std;

// Lecture - 1 : Enums and Conditional Statements

class Player
{
protected:
    int health;
    int maxHealth;
    int attack;
    int shield;
    int heal;

    bool IsAlive()
    {
        if (health <= 0)
            return false;
        else
            return true;
    }

public:
    enum playerType
    {
        tankType,
        attackType,
        healType
    };

    // Getter & Setter
    void SetHealth(int _health) { health = _health; }
    int GetHealth() { return health; }
    void SetMaxHealth(int _maxHealth) { maxHealth = _maxHealth; }
    int GetMaxHealth() { return maxHealth; }
    void SetAttack(int _attack) { attack = _attack; }
    int GetAttack() { return attack; }
    void SetShield(int _shield) { shield = _shield; }
    int GetShield() { return shield; }
    void SetHeal(int _heal) { heal = _heal; }
    int GetHeal() { return heal; }

    void TakeDamage(int damage)
    {
        health -= damage;
        if (!IsAlive())
        {
            health = 0;
            cout << "Player Died!!!" << endl;
        }
    }

    void GiveDamage(int enemyHealth)
    {
        enemyHealth -= attack;
        if (enemyHealth <= 0)
        {
            enemyHealth = 0;
            cout << "You killed the Enemy..." << endl;
        }
    }
};

class Tanker : public Player
{
public:
    Tanker()
    {
        cout << "1. I'm a Tanker. I have the highest attack and health than anyone else." << endl;
        cout << "I even have a shield to protect my teamates.\n"
             << endl;
    }

    void TakeDamage(int damage, int shield)
    {
    }
};

class Attacker : public Player
{
public:
    Attacker()
    {
        cout << "2. I'm an Attacker. I can give constant damage to the enemies.\n"
             << endl;
    }
};

class Healer : public Player
{
public:
    Healer()
    {
        cout << "3. I'm a Healer. I can give healing to my teammates to protect them and \nhelp them keep on fighting.\n"
             << endl;
    }

    void Heal()
    {
        health += heal;
        if (health > maxHealth)
        {
            health = maxHealth;
            cout << "Player health is already max. Heal is not needed." << endl;
        }
    }
};

class Enemy
{
protected:
    int health;
    int attack;
    int shield;
};

bool GameManager(int playerChoice, Player player, Enemy enemy)
{
    bool gameOver = false;

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

int main()
{
    cout << "Welcome Players, to the World of Heros. Where you will have to fight with powerful foes." << endl;
    cout << "Now, it's your turn to become a hero and save this world from monsters.\n"
         << endl;

    Player player;
    Tanker tanker;
    Attacker attacker;
    Healer healer;
    Enemy enemy;

    int playerChoice;
    cout << "Select your hero class between 1-3 : " << endl;
    cin >> playerChoice;

    if (!GameManager(playerChoice, player, enemy))
    {
        cout << "Game Over!!!" << endl;
    }
}