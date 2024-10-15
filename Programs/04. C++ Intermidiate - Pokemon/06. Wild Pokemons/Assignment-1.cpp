#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<string> shopingLists;

    shopingLists.push_back("Apples");
    shopingLists.push_back("Milk");
    shopingLists.push_back("Bread");
    shopingLists.push_back("Eggs");

    cout << "Brock : \"The second Item is: " << shopingLists[1] << "\"" <<endl;

    cout << "Brock's Shopping List:" << endl;

    for (int i=0; i<shopingLists.size(); i++)
    {
        cout << i+1 << ". " << shopingLists[i] << endl;
    }
}