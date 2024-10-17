#include <iostream>
using namespace std;

// Assignment : The Machine Forge

class MasterMachine
{
public:
    MasterMachine()
    {
        cout << "Master Machine activated." << endl;
    }
    ~MasterMachine()
    {
        cout << "Master Machine decommissioned." << endl;
    }
};

class AssistantDrone : public MasterMachine
{
public:
    AssistantDrone()
    {
        cout << "Assistant Drone deployed" << endl;
    }
    ~AssistantDrone()
    {
        cout << "Assistant Drone dismantled" << endl;
    }
};

int main()
{
    //  MasterMachine m;
    AssistantDrone a;
    return 0;
}