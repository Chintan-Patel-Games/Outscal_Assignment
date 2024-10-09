#include <iostream>

using namespace std;

// Current Enums causing confusion in the lab
// enum HealingItems
// {
//     Potion,
//     Elixir
// };

// enum BattleItems
// {
//     Potion,
//     Elixir
// };

enum class HealingItems
{
    Potion,
    Elixir
};

enum class BattleItems
{
    Potion,
    Elixir
};

HealingItems healItem;
BattleItems battleItem;

int main()
{

    cout << "Lists of Healing Items." << endl;
    cout << "1. Healing Potion." << endl;
    cout << "2. Healing Elixir." << endl;

    int choice1;
    cout << "Enter your choice of potion :- ";
    cin >> choice1;

    switch (choice1)
    {
    case 1:
        healItem = HealingItems::Potion;
        cout << "Heal Potion" << endl;
        break;
    case 2:
        healItem = HealingItems::Elixir;
        cout << "Heal Elixir" << endl;
        break;
    default:
        break;
    }

    switch (healItem)
    {
    case HealingItems::Potion:
        cout << "Healing Potion used! Your Pokémon recovers HP!" << endl;
        break;
    case HealingItems::Elixir:
        cout << "Healing Elixir used! Your Pokémon has revived!" << endl;
        break;
    default:
        break;
    }

    cout << "Lists of Battle Items." << endl;
    cout << "1. Battle Potion." << endl;
    cout << "2. Battle Elixir." << endl;
    
    int choice2;
    cout << "Enter your choice of potion :- ";
    cin >> choice2;

    switch(choice2)
    {
    case 1:
        battleItem = BattleItems::Potion;
        cout << "Battle Potion" << endl;
        break;
    case 2:
        battleItem = BattleItems::Elixir;
        cout << "Battle Elixir" << endl;
        break;
    default:
        break;
    }

    switch (battleItem)
    {
    case BattleItems::Potion:
        cout << "Battle Potion used! Your Pokémon's attack power rises!" << endl;
        break;
    case BattleItems::Elixir:
        cout << "Battle Elixir used! Your Pokémon's is unstopable!" << endl;
        break;
    default:
        break;
    }
}