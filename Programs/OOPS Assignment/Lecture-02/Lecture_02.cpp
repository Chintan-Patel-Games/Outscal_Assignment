#include <iostream>

using namespace std;

void PrintScore(int score)
{
    cout << "Score : " << score << endl;
}

int GetBoxScore(char box)
{
    if (box == 'r')
    {
        return 10;
    }
    else if (box == 'b')
    {
        return 20;
    }
    else
    {
        return 0;
    }
}

// Assignment
int CalculateBonus(int repeatCounter, int score)
{
    int bonus = score * repeatCounter;
    PrintScore(bonus);
    return bonus;
}

void CalculateTotalScore(char box[])
{
    int totalScore = 0;
    int bonus = 0;
    int repeatCounterR = 1;
    int repeatCounterB = 1;

    for (int i = 0; i < 4; i++)
    {
        int score = GetBoxScore(box[i]);
        if (box[i - 1] == box[i] && box[i] == 'r')
        {
            ++repeatCounterR;
            bonus = CalculateBonus(repeatCounterR, score);
            totalScore += bonus;
        }
        else if (box[i - 1] == box[i] && box[i] == 'b')
        {
            ++repeatCounterB;
            bonus = CalculateBonus(repeatCounterB, score);
            totalScore += bonus;
        }
        else
        {
            PrintScore(score);
            totalScore += score;
        }
    }

    cout << "Total Score : " << totalScore << endl;
}

int main()
{
    char box1[] = {'r', 'b', 'b', 'b'};
    CalculateTotalScore(box1);

    char box2[] = {'b', 'b', 'r', 'r'};
    CalculateTotalScore(box2);
}