#include <iostream>

using namespace std;

// Assignment - 1 : Custom Constructor

class Player
{
private:
    int health;
    int score;
    string name;

public:
    Player(int _health, int _score, string _name)
    {
        health = _health;
        score = _score;
        name = _name;

        cout << "Hi, I am a custom constructor of Class Player, some call me parameterized constructor as well. Basically, developers use me to set the specific values to the variables." << endl;
    }

    int GetHealth()
    {
        return health;
    }
};

int main()
{
    int hp;

    Player player(hp, 10, "Player");

    cout << "Enter Player Health : ";
    cin >> hp;

    cout << "Player health : " << player.GetHealth() << endl;
}