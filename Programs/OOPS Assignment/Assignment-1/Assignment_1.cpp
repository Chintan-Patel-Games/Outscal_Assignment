#include <iostream>

using namespace std;

class Player
{
    private:
        int health = 100;
        int bullets = 30;

    public:
        // void GetHealth()
        // {
        //     cout << "Player's current health is : " << health << endl;
        // }

        void Shoot()
        {
            bullets--;
            cout << "Remaining bullets : " << bullets << endl;
        }
        // If not returning player health, we could use GetHealth() method
        int TakeDamage(int damage)
        {
            cout << "Damage Taken : " << damage << endl;
            return health -= damage;
        }

        void ReviveHealth(int heal)
        {
            cout << "Health Restored : " << heal << endl;
            health += heal;
        }
};

int main()
{
    Player player;
    player.Shoot();
    player.Shoot();
    player.Shoot();
    int playerHealth = player.TakeDamage(20);
    cout << "Player's current health is : " << playerHealth << endl;
    player.ReviveHealth(5);
}