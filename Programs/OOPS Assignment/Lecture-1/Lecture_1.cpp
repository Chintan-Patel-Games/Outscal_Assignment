#include <iostream>

using namespace std;

int main()
{

    // Lecture - 1 : Introduction to C++

    string username;
    int age;
    string phoneNumber;

    cout << "Hello World!" << endl;

    cout << "What you're name user?" << endl;

    // Assignment - 1 : Get username from user
    cin >> username;
    cout << "How are you today, " << username << "?" << endl;
    cout << "Hope you're doing well!" << endl;

    cout << username << " - can you let us know your age?" << endl;
    cin >> age;
    cout << "Thank you for letting us know your age is " << age << endl;

    // Assignment - 2 : Get phone number from user
    cout << username << " - can you also let us know your phone number?" << endl;
    cin >> phoneNumber;
    cout << "Thank you for giving us your phone number is " << phoneNumber << endl;
}