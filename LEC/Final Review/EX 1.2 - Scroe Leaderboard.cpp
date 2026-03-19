#include <iostream>
#include <string>
#include <cmath>

using namespace std;

struct Player
{
    string name;
    int score;
};

void sortByScore(Player players[], int count)
{
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < (count - 1) - i; j++)
        {
            // swap if curreeent value is biggeer than next value
            if (players[j].score > players[j + 1].score)
            {

                // do swap usign a temproary varble
                Player temp = players[j];

                players[j] = players[j + 1];
                players[j + 1] = temp;
            }
        }
    }
}

void printLeaderboard(const Player players[], int count)
{
    for (int i = 0; i < count; i++)
    {
        cout << i + 1 << ". " << players[i].name << " ----- " << players[i].score << "\n";
    }
}

int main()
{
    Player players[4] =
        {
            {"john janiteur", 6767},
            {"skibidi toilt", 67},
            {"john persona5", 5},
            {"bradon hourse", 16},
        };

    sortByScore(players, size(players));
    printLeaderboard(players, size(players));

    return 0;
}