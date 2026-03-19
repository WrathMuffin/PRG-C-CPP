#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    int count;
    cout << "How many enemies do you want to spawn?\n";
    cin >> count;

    string *enemyType = new string[count];

    string types[3] =
        {
            {"BitIgnore"},
            {"Push n' Pull"},
            {"BitHub"},
        };

    for (int i = 0; i < count; i++)
    {
        enemyType[i] = types[rand() % 3];
        cout << enemyType[i] << "\n";
    }

    return 0;
}