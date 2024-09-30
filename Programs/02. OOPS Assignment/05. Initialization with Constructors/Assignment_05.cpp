#include <iostream>

using namespace std;

class Player
{
private:
    int health;
    int lives;

public:
    Player(int _health, int _lives)
    {
        health = _health;
        lives = _lives;

        cout << "I am a player, I just got spawned!" << endl;
        cout << "Player Health : " << health << endl;
    }

    ~Player()
    {
        cout << "I am a player and I died" << endl;
        cout << "Player Health : " << health << endl;
    }
};


class FastPlayer : Player
{
private:
    int speed;

public:
    FastPlayer(int _speed, int _lives) : Player(100, _lives)
    {
        cout << "I am a fast player, I just got spawned! Speed: " << speed << ", Lives: " << _lives << endl;
    }

    ~FastPlayer()
    {
        cout << "Fast Player has died!!!" << endl;
    }
};

void LocalObjects()
{
    Player* player = new Player(100,3);
    
    FastPlayer* fastPlayer = new FastPlayer(10, 5);

    delete player;
    delete fastPlayer;
}

int main()
{
    Player *tankPlayer = new Player(525, 1);
    Player *attackPlayer = new Player(325, 2);
    Player *healPlayer = new Player(225, 3);

    Player *player = new Player(1000, 0);
    FastPlayer* fastPlayer = new FastPlayer(5, 2);

    LocalObjects();

    delete tankPlayer;
    delete attackPlayer;
    delete healPlayer;
    delete player;
    delete fastPlayer;
}