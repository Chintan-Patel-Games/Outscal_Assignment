// #include <iostream>

// using namespace std;

// // Task - Write a program on Function Overloading

// class Dragon
// {
// public:
//     void AccessSuperPower(string powerType)
//     {
//         cout << "Dragon has used the power of " << powerType << endl;
//     }
// };

// class AnemoDragon : public Dragon
// {
// public:
//     void AccessSuperPower(string powerType, string direction)
//     {
//         cout << "Anemo Dragon used the power of " << powerType << " in " << direction << " direction." << endl;
//     }
// };

// class PyroDragon : public Dragon
// {
// public:
//     void AccessSuperPower(string powerType, int aoe)
//     {
//         cout << "Pyro Dragon used the power of " << powerType << " at " << aoe << " area field." << endl;
//     }
// };

// class HydroDragon : public Dragon
// {
// public:
//     void AccessSuperPower(string powerType, float force)
//     {
//         cout << "Hydro Dragon used the power of " << powerType << " with " << force << " force." << endl;
//     }
// };

// int main()
// {
//     Dragon dragon;
//     dragon.AccessSuperPower("Magic");

//     AnemoDragon anemoDragon;
//     anemoDragon.AccessSuperPower("Wind", "North");

//     PyroDragon pyroDragon;
//     pyroDragon.AccessSuperPower("Fire", 5);

//     HydroDragon hydroDragon;
//     hydroDragon.AccessSuperPower("Water", 50);
// }

#include <iostream>

using namespace std;

class Dragon
{
public:
    void AccessSuperPower(string power)
    {
        cout << "Dragon used the power of " << power << endl;
    }

    void AccessSuperPower(string power, string direction)
    {
        cout << "Dragon used the power of " << power << " in " << direction << " direction." << endl;
    }

    void AccessSuperPower(string power, int aoe)
    {
        cout << "Dragon used the power of " << power << " with " << aoe << " aoe." << endl;
    }

    void AccessSuperPower(string power, double force)
    {
        cout << "Dragon used the power of " << power << " with " << force << " force." << endl;
    }
};

int main()
{
    Dragon dragon;
    dragon.AccessSuperPower("Magic");
    dragon.AccessSuperPower("Wind", "North");
    dragon.AccessSuperPower("Fire", 5);
    dragon.AccessSuperPower("Water", 50);
}
