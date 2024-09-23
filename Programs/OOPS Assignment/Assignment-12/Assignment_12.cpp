#include <iostream>

using namespace std;

// Assignment - Creating objects using pointers

class Player
{
private:
    int playerHealth;

public:
    int GetPlayerHealth() { return playerHealth; }
    void SetPlayerHealth(int _playerHealth) { playerHealth = _playerHealth; }
};

int main()
{
    Player *pplayer = new Player();
    pplayer -> SetPlayerHealth(100);
    cout << "Player Health : " << pplayer -> GetPlayerHealth() << endl;

    delete pplayer;
}