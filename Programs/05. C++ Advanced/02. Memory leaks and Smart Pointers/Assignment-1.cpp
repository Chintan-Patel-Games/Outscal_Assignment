#include <iostream>

using namespace std;

// Assignment-1 : Memory Leak

class Player
{
public:
    Player()
    {
        cout << "I am a player, I just spawned" << endl;
    }

    ~Player()
    {
        cout << "Ops, that enemy killed me, I just died!" << endl;
    }
};

int main()
{
    Player player;
    Player *p = new Player();
    delete(p);
}