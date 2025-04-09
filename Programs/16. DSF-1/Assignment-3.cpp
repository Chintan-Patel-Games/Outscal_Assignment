#include <iostream>
#include <string>
#include <cctype>

// Assignment - 3 : Invert Text Case (Bonus)

int main() {
    std::string str;
    
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);

    for (char& ch : str) {
        if (std::islower(ch)) {
            ch = std::toupper(ch);
        } else if (std::isupper(ch)) {
            ch = std::tolower(ch);
        }
    }

    std::cout << "Converted string: " << str << std::endl;

    return 0;
}