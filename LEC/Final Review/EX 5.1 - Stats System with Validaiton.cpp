#include <iostream>
#include <string>
#include <cmath>
#include <iostream>

using namespace std;

class CharacterStats
{
    int strength, agility, intelligence;

    bool isValid(int val) { return val >= 1 && val <= 99; }

public:
    CharacterStats(int str, int agi, int intel)
    {
        strength = str;
        agility = agi;
        intelligence = intel;
    }

    void setStat(string stat, int val)
    {
        if (val < 1 || val > 99)
        {
            cout << "\nMust be within 1 - 99!\n";
            return;
        }

        else
        {
            if (stat == "strength")
            {
                strength = val;
            }

            else if (stat == "agility")
            {
                agility = val;
            }

            else if (stat == "intelligence")
            {
                intelligence = val;
            }
        }
    }

    int getStength() const { return strength; }
    int getAgility() const { return agility; }
    int getIntelligenceh() const { return intelligence; }

    void printStats() const
    {
        cout << "\nStrength: " << strength << "\nAgility: " << agility << "\nIntelligence: " << intelligence << "\n";
    }

    int attackPower() const
    {
        return strength * 2 + agility / 2;
    }
};
int main()
{
    CharacterStats hero(50, 40, 30);

    hero.printStats();

    hero.setStat("strength", 120);    // should warn
    hero.setStat("agility", 67);      // should warn
    hero.setStat("intelligence", 75); // valid

    hero.printStats();

    cout << "Attack Power: " << hero.attackPower() << endl;
    return 0;
}