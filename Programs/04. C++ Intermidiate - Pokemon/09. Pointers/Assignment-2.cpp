#include <iostream>
#include <string>
using namespace std;

class Robot
{
public:
    string name;
    string task;

    Robot(const string& robotName, const string& robotTask)
    {
        name = robotName;
        task = robotTask;
    }
};

int main()
{
    Robot* robot1 = new Robot("Optimus Prime", "Lead Autobots");
    Robot* robot2 = new Robot("Bumbulbee", "Save the Hero");
    Robot* robot3 = new Robot("Rachet", "Solve Puzzles");
    Robot* robot4 = new Robot("Clank", "Backpack for Rachet");

    cout << "Robot Name: " << robot1->name << ", Assigned Task: " << robot1->task << endl;
    cout << "Robot Name: " << robot2->name << ", Assigned Task: " << robot2->task << endl;
    cout << "Robot Name: " << robot3->name << ", Assigned Task: " << robot3->task << endl;
    cout << "Robot Name: " << robot4->name << ", Assigned Task: " << robot4->task << endl;

    delete robot1;
    delete robot2;
    delete robot3;
    delete robot4;

    return 0;
}