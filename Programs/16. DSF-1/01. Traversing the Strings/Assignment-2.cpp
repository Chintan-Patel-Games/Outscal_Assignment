#include <iostream>
#include <string>

// Assignment - 2 : Operator overloading

class Player {
private:
    std::string name;

public:
    Player(std::string playerName) {
        name = playerName;
    }

    Player operator+(const Player& other) {
        return Player(name + other.name);
    }

    void display() const {
        std::cout << "Concatenated Name: " << name << std::endl;
    }
};

int main() {
    std::string name1, name2;

    std::cout << "Enter name for player 1: ";
    std::getline(std::cin, name1);

    std::cout << "Enter name for player 2: ";
    std::getline(std::cin, name2);

    Player player1(name1);
    Player player2(name2);

    Player combinedPlayer = player1 + player2;

    combinedPlayer.display();

    return 0;
}