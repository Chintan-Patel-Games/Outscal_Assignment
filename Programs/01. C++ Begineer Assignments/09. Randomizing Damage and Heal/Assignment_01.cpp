#include <iostream>
#include <ctime>

using namespace std;

// Assignment - 1 : Adding randomization in damage and heal

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
private:
    int health = 100;

    int max_damage = 30;
    int min_damage = 20;

    int max_healing = 15;
    int min_healing = 8;

public:
    Player()
    {
        cout << "\nHi, I'm Lumine, the younger sibling of Aether! We need to defeat God of Heavenly Principles to free my brother\n"
             << endl;
        cout << "Here are some stats that might be useful for you going ahead.\n\n"
             << endl;

        cout << "Lumine's Health: " << health << endl;
        cout << "----------------------------------" << endl;
        cout << "Lumine's Attack range is between: " << min_damage << " - " << max_damage << endl;
        cout << "----------------------------------" << endl;
        cout << "Lumine's Healing range is between: " << min_healing << " - " << max_healing << endl;
    }

    int GetHealth()
    {
        return health;
    }

    void TakeDamage(int damage)
    {
        if (health > 0) // Player is Alive
        {
            cout << "Oh no, Lumine got hit by the God of Heavenly Principles" << endl;
            cout << "The God dealt damage of " << damage << endl;
            health = health - damage;
            cout << "Lumine's current health after receiving damage is : " << health << endl;
        }
        else
        {
            cout << "Lumine has died!!..." << endl;
        }
    }

    int GiveDamage()
    {
        cout << "Lumine is about to attack the God of Heavenly Principles" << endl;
        srand(time(0));
        int randDamage = (rand() % (max_damage - min_damage + 1) + min_damage);
        cout << "The God of Heavenly Principles has taken damage of " << randDamage << endl;
        return randDamage;
    }

    void Heal()
    {
        srand(time(0));
        int randHeal = (rand() % (max_healing - min_healing + 1) + min_healing);
        cout << "Lumine picked up a potion and drank it" << endl;
        cout << "Lumine healed with HP of " << randHeal << endl;
        health += randHeal;
        cout << "Lumine's health after healing is : " << health << endl;
    }
};

int main()
{
    char userInput;

    GameStory();

    do
    {
        cout << "Press S to start the game or any other key to exit!" << endl;
        cin >> userInput;

        if (userInput == 'S' || userInput == 's')
        {
            Player player;
        }
        else
        {
            cout << "Thanks for playing the game!" << endl;
        }

    } while (userInput == 'S' || userInput == 's');
}