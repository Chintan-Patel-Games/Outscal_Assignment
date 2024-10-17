#include <iostream>
using namespace std;

// Assignment : Code Conflict

class Transaction
{
public:
    void Process()
    {
        cout << "Processing a standard transaction." << endl;
    }
};

class CreditTransaction : public Transaction
{
public:
    void Process()
    {
        cout << "Processing a credit transaction." << endl;
    }
};

int main()
{
    CreditTransaction ct;
    ct.Transaction::Process();
    return 0;
}