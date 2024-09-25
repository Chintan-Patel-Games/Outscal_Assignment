#include <iostream>

using namespace std;

// Assignment - 4 : Constructor Inheritance

// Task - 1
class Player
{
public:
    // Task - 2
    Player()
    {
        cout << "Task - 8" << endl;
        cout <<  "Creating an object of class Player." << endl;
    }

    // Task - 3
    ~Player()
    {
        cout << "Deleting object of class Player." << endl;
    }
};

// Task - 4
class StrongPlayer : public Player
{
public:
    // Task - 5
    StrongPlayer()
    {
        cout << "Creating an object of class StrongPlayer." << endl;
    }

    // Task - 6
    ~StrongPlayer()
    {
        cout <<  "Deleting object of class StrongPlayer." << endl;
    }
};

int main()
{
    // Task - 7
    StrongPlayer strongplayer;
}