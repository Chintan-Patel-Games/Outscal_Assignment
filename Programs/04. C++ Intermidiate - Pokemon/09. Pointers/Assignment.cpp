#include <iostream>
using namespace std;

// Assignment : The Enchanted Toolbox

int main()
{
    int tool1 = 15;
    int tool2 = 30;

    int *compartment1 = &tool1;
    int *compartment2 = &tool2;

    cout << "Compartment1 address : " << compartment1 << endl;
    cout << "Compartment2 address : " << compartment2 << endl;

    cout << "Compartment1 value : " << *compartment1 << endl;
    cout << "Compartment2 value : " << *compartment2 << endl;

    int compartment3 = *compartment1;
    *compartment1 = *compartment2;
    *compartment2 = compartment3;

    cout << "After Swap" << endl;
    cout << "Compartment1 address : " << *compartment1 << endl;
    cout << "Compartment2 address : " << *compartment2 << endl;
    return 0;
}