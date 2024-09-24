#include <iostream>

using namespace std;

// Lecture - 3: C++ Introduction to OPPS

class Player
{
protected:
    int health = 100;

public:
    void GetHealth()
    {
        cout << "Player Current Health : " << health << endl;
    }

    void TakeDamage(int damage)
    {
        if (!IsAlive())
        {
            cout << "Player Died" << endl;
        }
        else
        {
            health -= damage;
            cout << "PLayer took damage of : " << damage << endl;
        }
    }

    bool IsAlive()
    {
        if (health <= 0)
            return false;
        else
            return true;
    }
};

class Tank : public Player
{
public:
    Tank()
    {
        cout << "I'm a Tank" << endl;
    }
};

class Attacker : public Player
{
public:
    Attacker()
    {
        cout << "I'm a Attacker" << endl;
    }
};

class Healer : public Player
{
public:
    Healer()
    {
        cout << "I'm a Healer" << endl;
    }
};

int main()
{
    Player player;
    player.GetHealth();
    player.TakeDamage(25);
    player.GetHealth();

    Tank tank;
    Attacker attacker;
    Healer healer;

    // Attacker attacker;
    // attacker.GetHealth();

    // Healer healer;
    // healer.GetHealth();
}