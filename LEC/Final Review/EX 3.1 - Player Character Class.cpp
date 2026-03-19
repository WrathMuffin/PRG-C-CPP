#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Player
{
public:
    // default consttuctor
    Player()
    {
        Name = "Default HERO";
        HP = 100;
        LVL = 1;
    }

    // parametarizer
    Player(string _nom, int _hp, int _lvl)
    {
        Name = _nom;
        HP = _hp;
        LVL = _lvl;
    }

    void takeDamage(int amount)
    {
        HP -= amount;

        if (HP <= 0)
        {
            HP = 0;
        }
    }

    void heal(int amount, int maxHP)
    {
        HP += amount;

        if (HP >= maxHP)
        {
            HP = maxHP;
        }
    }

    void display() const
    {
        cout << "++========================++" << endl;
        cout << "||   Name: " << Name << "\n";
        cout << "||   HP:   " << HP << "\n";
        cout << "||   LVL:  " << LVL << "\n";
        cout << "++========================++\n"
             << endl;
    };

private:
    string Name;
    int HP, LVL;
};

int main()
{
    Player heroes[2] =
        {
            {},                    // default hero
            {"SKIBIDIETE", 67, 7}, // my heeor
        };

    cout << "\nCurrent heroes: \n";

    for (int i = 0; i < size(heroes); i++)
    {
        heroes[i].display();
    }

    heroes[0].takeDamage(67);
    heroes[1].takeDamage(60);

    for (int i = 0; i < size(heroes); i++)
    {
        heroes[i].display();
    }

    heroes[0].heal(1000, 100);
    heroes[1].heal(1, 67);

    for (int i = 0; i < size(heroes); i++)
    {
        heroes[i].display();
    }

    return 0;
}