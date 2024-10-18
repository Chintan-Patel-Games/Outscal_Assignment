#include <iostream>
using namespace std;

// Assignment : The Hidden Core Network

class OperationsCore
{
public:
    virtual void executeTask()
    {
        cout << "Executing general task protocol." << endl;
    }
};

class CyberAgent : public OperationsCore
{
public:
    void executeTask()
    {
        cout << "CyberAgent executing cybersecurity protocol." << endl;
    }
};

class DataMiner : public OperationsCore
{
public:
    void executeTask()
    {
        cout << "DataMiner extracting data sets." << endl;
    }
};

class LogisticsBot : public OperationsCore
{
public:
};

int main()
{
    OperationsCore *oc = new OperationsCore();
    OperationsCore *ca = new CyberAgent();
    OperationsCore *dm = new DataMiner();
    OperationsCore *lb = new LogisticsBot();

    oc->executeTask();
    ca->executeTask();
    dm->executeTask();
    lb->executeTask();

    return 0;
}