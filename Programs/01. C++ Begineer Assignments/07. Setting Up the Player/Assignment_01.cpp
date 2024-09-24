#include <iostream>

using namespace std;

// Assignment - 1 : Personalize your Player!

// Task -1
void GameStory()
{
    // Task -2
    cout << "---------------------------------------------------------------------------------\n";
    cout << "---------------------------------  Fates Entwined  ------------------------------\n";
    cout << "---------------------------------------------------------------------------------\n\n";

    cout << "  Two siblings, Aether and Lumine, are the travellers who roam around the galaxy, world by world. They both have came upon a pretty dense situation when they were in the world of Teyvat.\n\n ";

    cout << "  The God of Heavenly Principles, had came before this siblings while they were about to leave Teyvat. The God suddenly grabbed Aether (older sibling) and captured him, and left Lumine (younger sibling) powerless to fight.\n\n ";

    cout << "  Now Traveller, after 500 years, the time has come for Lumine who has been slept through all this years to wake up and to defeat the God of Heavenly Principles and to free your sibling.\n\n";

    cout << "---------------------------------------------------------------------------------\n\n";
}

class Player
{
public:
    int health = 100;
    int attack_power = 10;
    Player(int _health, int _attack_power)
    {
        health = _health;
        attack_power = _attack_power;
    }
};

int main()
{
    GameStory();

    Player player(100, 10);

    cout << "Player health : " << player.health << endl;
    cout << "Player attack power : " << player.attack_power << endl;
}