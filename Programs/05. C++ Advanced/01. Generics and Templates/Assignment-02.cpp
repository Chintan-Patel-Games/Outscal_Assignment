#include <iostream>

using namespace std;

// Assignment : Generic Class

template <typename T>
class SpecialAbility
{
private:
    T attackStrength;

public:
    T PerformSpecialAbility()
    {
        return attackStrength;
    }
};

int main()
{
    SpecialAbility<int> sa1;
    int mollyStrength = sa1.PerformSpecialAbility();
    SpecialAbility<float> sa2;
    float brustStrength = sa2.PerformSpecialAbility();

    cout << "Enter Attack Strength of Molly: ";
    cin >> mollyStrength;

    cout << "Brim used his Molly with attack strength : " << mollyStrength << endl;

    cout << "Enter Attack Strength of Brust: ";
    cin >> brustStrength;
    cout << "Brim used his Brust with attack strength : " << brustStrength << endl;
}