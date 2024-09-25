#include <iostream>

using namespace std;

// Assignment - 3 : Destructor

// Task -1
class Player
{
public:
    // Task - 2
    Player()
    {
        cout << "Task - 5" << endl;
        cout << "I am a player, Arther. I just got spawned in the game world because my developer created the player's object. Agggh! boring life begins, fight, die, respawn. Huh I am gonna kill that bastard if I get out of this game" << endl;
    }

    // Task - 3
    ~Player()
    {
        cout << "See?? that C++ destroyed my object, and now I died." << endl;
    }
};

int main()
{
    // Task - 4
    Player player;
}