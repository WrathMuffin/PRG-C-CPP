#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void applyDamage(int *HP, int DMG)
{
    *HP -= DMG;

    if (*HP <= 0)
    {
        *HP = 0;
    }
}

void applyHeal(int *HP, int amount, int maxHP)
{
    *HP += amount;

    if (*HP >= maxHP)
    {
        *HP = maxHP;
    }
}

int main()
{
    int playerHP = 100;
    const int MAX_HP = 100;

    cout << "HP: " << playerHP << "\n";

    applyDamage(&playerHP, 35);
    cout << "HP: " << playerHP << "\n";

    applyHeal(&playerHP, 20, MAX_HP);
    cout << "HP: " << playerHP << "\n";

    applyHeal(&playerHP, 30, MAX_HP);
    cout << "HP: " << playerHP << "\n";

    return 0;
}