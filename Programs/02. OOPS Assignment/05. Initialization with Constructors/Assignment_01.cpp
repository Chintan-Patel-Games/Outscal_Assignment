#include <iostream>

using namespace std;

// Assignment - 1 : Custom Constructor

// Task - 1
class Player
{
// Task -2
private:
    int health;
    int score;
    string name;

public:
    // Task -3
    Player(int _health, int _score, string _name)
    {
        // Task -4
        health = _health;
        score = _score;
        name = _name;

        cout << "Hi, I am a custom constructor of Class Player, some call me parameterized constructor as well. Basically, developers use me to set the specific values to the variables." << endl;
    }

    // Task -5
    int GetHealth()
    {
        return health;
    }
};

int main()
{
    int hp;

    // Task -6
    cout << "Enter Player Health : ";
    cin >> hp;
    Player player(hp, 10, "Player");

    // Task - 7
    cout << "Player health : " << player.GetHealth() << endl;
}