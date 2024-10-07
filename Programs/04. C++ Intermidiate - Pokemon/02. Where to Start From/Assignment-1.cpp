#include <iostream>

using namespace std;

int main()
{
    cout << "Welcome, brave adventurer!" << endl;

    cout << "You find yourself standing in front of a massive, ancient castle." << endl;

    cout << "The walls are cracked with age, and the doors creak as they slowly open in front of you." << endl;

    cout << "Inside, there are many rooms, each more mysterious than the last." << endl;

    cout << "Some may hold treasures beyond imagination, while others may hide dangers lurking in the shadows." << endl;

    cout << "Once inside, who knows what you may find?" << endl;

    cout << "Will it be riches, knowledge, or something… more sinister?" << endl;

    cout << "It’s all up to the room you pick." << endl;

    cout << "Choose a room: ";

    int choice;
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "A room full of gold coins! You can retire now, you lucky soul!" << endl;
        break;
    case 2:
        cout << "A library of ancient books! You gain immense knowledge, but beware… some knowledge comes with a price." << endl;
        break;
    case 3:
        cout << "A sleeping dragon! You barely escape with your life. Perhaps next time, choose more wisely..." << endl;
        break;
    case 4:
        cout << "A time machine! Its says you can only trip for once. Be cautious to not alter any major conflicts in the past." << endl;
        break;
    case 5:
        cout << "An Excaliber sword! Whoever holds this Powerful sword can defeat any foe." << endl;
        break;
    default:
        cout << "A secret passage to the dungeon! Beware, danger lies ahead in the dark corridors." << endl;
    }

    return 0;
}