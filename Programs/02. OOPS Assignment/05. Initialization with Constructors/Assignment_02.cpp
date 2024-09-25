#include <iostream>

using namespace std;

// Assignment - 2 : Defalut Constructor

// Task - 1
class Player
{
// Task - 2
private:
    int health;
    int score;
    int bullets;
    int frags;
    string name;

public:
    // Task - 3
    Player()
    {
        health = 100;
        score = 1000;
        name = "Player";
        bullets = 30;
        frags = 3;

        cout << "Hi, I am a default constructor of Class Player, basically developers use me to initialize important variables/parameters of the player." << endl;
    }

    // Task - 4
    int GetHealth() { return health; }
    int GetScore() { return score; }
    string GetName() { return name; }
};

int main()
{
    // Task - 5
    Player player;

    // Task - 6
    cout << "Player health : " << player.GetHealth() << endl;
    cout << "Player score : " << player.GetScore() << endl;
    cout << "Player name : " << player.GetName() << endl;
}