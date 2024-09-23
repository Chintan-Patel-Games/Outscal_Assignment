#include <iostream>

using namespace std;

// Assignment - C++ Coding Challenge

string generateRandomString(int length)
{
    string result;
    for (int i = 0; i < length; ++i)
        result += (rand() % 2 == 0) ? 'R' : 'B';
    return result;
}

int calculateScore(string str)
{
    int totalScore = 0;
    int streak = 1;

    for (int i = 0; i < str.size(); ++i)
    {
        int points = (str[i] == 'R') ? 10 : 20;

        if (i > 0 && str[i] == str[i - 1])
            streak++;
        else
            streak = 1;

        totalScore += points * streak;
    }

    return totalScore;
}

int main()
{
    srand(time(0));

    int length = rand() % 10 + 1;
    string randomString = generateRandomString(length);

    cout << "Random string: " << randomString << endl;

    int score = calculateScore(randomString);

    cout << "Total score: " << score << endl;
}
