#include <iostream>

using namespace std;

class Player
{
private:
    int maxHealth = 100;
    int currentHealth = maxHealth;
    int bullets = 30;

public:
    // void GetHealth()
    // {
    //     cout << "Player's current health is : " << health << endl;
    // }

    void Shoot()
    {
        if (bullets == 0)
        {
            cout << "You're out of bullets..." << endl;
        }
        else
        {
            bullets--;
            cout << "Remaining bullets : " << bullets << endl;
        }
    }

    void TakeDamage(int damage)
    {
        currentHealth -= damage;

        if (currentHealth > 0)
        {
            cout << "Damage Taken : " << damage << endl;
            cout << "Player Health after taking damage : " << currentHealth << endl;
        }
        else
        {
            cout << "Player Died!!!" << endl;
        }
    }

    void ReviveHealth(int heal)
    {
        if (currentHealth == maxHealth)
        {
            cout << "Player is at max health, you don't need healing." << endl;
        }

        if (currentHealth > 0)
        {
            currentHealth += heal;
            if (currentHealth > maxHealth)
            {
                currentHealth = maxHealth;
            }
            cout << "Health Restored : " << heal << endl;
            cout << "Player Health after heal : " << currentHealth << endl;
        }
        else
        {
            cout << "Player is dead. You can't heal a dead person!!!" << endl;
        }
    }
};

int main()
{
    Player player;
    player.Shoot();
    player.Shoot();
    player.Shoot();
    player.TakeDamage(20);
    player.ReviveHealth(5);
}