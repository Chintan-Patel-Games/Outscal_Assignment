#include <iostream>

using namespace std;

// Assignment - 1 : Creating Bluprint for Player

void GameStory()
{
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
    int Health;
    int Attack_Power;

    Player(int health, int attack_power)
    {
        Health = health;
        Attack_Power = attack_power;
    }
};

int main()
{
    GameStory();

    Player player(100, 20);

    cout << "Player health : " << player.Health << endl;
    cout << "Player attack power : " << player.Attack_Power << endl;
}