#include <iostream>

using namespace std;

// Assignment : Generic Functions

template <typename T>
void Sum(T x, T y)
{
    cout << "Total Score : " << x+y << endl;
}

int main()
{
    int currentScoreI;
    int addScoreI;
    cout << "Enter the current score(int) : ";
    cin >> currentScoreI;
    cout << "Enter the score to be added(int) : ";
    cin >> addScoreI;
    Sum(currentScoreI, addScoreI);

    float currentScoreF;
    float addScoreF;
    cout << "Enter the current score(float) : ";
    cin >> currentScoreF;
    cout << "Enter the score to be added(float) : ";
    cin >> addScoreF;
    Sum(currentScoreF, addScoreF);
}