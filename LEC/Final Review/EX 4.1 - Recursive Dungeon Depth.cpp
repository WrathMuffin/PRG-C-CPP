#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int totalLoot(int floor, int lootPerFloor)
{
    if (floor == 0)
    {
        return 0;
    }

    else
    {
        // lootperflorr is multitpled by the next number
        // wwhich is reduced by 1 each time
        return lootPerFloor + totalLoot(floor - 1, lootPerFloor);
    }
}

int power(int base, int exp)
{
    if (exp == 0)
    {
        return 1;
    }

    else
    {
        return base * power(base, exp - 1);
    }
}

int main()
{
    cout << totalLoot(5, 100) << "\n"
         << power(2, 8) << "\n";

    return 0;
}