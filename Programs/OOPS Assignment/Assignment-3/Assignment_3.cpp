#include <iostream>

using namespace std;

// Task - Write a program on Function Overloading

class Dragon
{
public:
    void AccessSuperPower(string powerType)
    {
        cout << "Dragon has used the power of " << powerType << endl;
    }
};

class AnemoDragon : public Dragon
{
public:
    void AccessSuperPower(string powerType, string direction)
    {
        cout << "Anemo Dragon used the power of " << powerType << " in " << direction << " direction." << endl;
    }
};

class PyroDragon : public Dragon
{
public:
    void AccessSuperPower(string powerType, int aoe)
    {
        cout << "Pyro Dragon used the power of " << powerType << " at " << aoe << " area field." << endl;
    }
};

class HydroDragon : public Dragon
{
public:
    void AccessSuperPower(string powerType, float force)
    {
        cout << "Hydro Dragon used the power of " << powerType << " with " << force << " force." << endl;
    }
};

int main()
{
    Dragon dragon;
    dragon.AccessSuperPower("Magic");

    AnemoDragon anemoDragon;
    anemoDragon.AccessSuperPower("Wind", "North");

    PyroDragon pyroDragon;
    pyroDragon.AccessSuperPower("Fire", 5);

    HydroDragon hydroDragon;
    hydroDragon.AccessSuperPower("Water", 50);
}