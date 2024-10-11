#include <iostream>

using namespace std;

// Assignment - 1 : The Mysterious Potions of the Wizard's Tower

void CastSpell(int x)
{
    cout << "Casting spell with magic level : " << x << endl;
}

void BrewElixir(int &x)
{
    x += 10;
    CastSpell(x);
}

void BrewPotion(int x)
{
    x += 50;
    CastSpell(x);
}

int main()
{
    int magicLevel = 30;
    cout << "Initial magic level : " << magicLevel << endl;
    BrewElixir(magicLevel);
    BrewPotion(magicLevel);
    cout << "Final magic level : " << magicLevel << endl;
}