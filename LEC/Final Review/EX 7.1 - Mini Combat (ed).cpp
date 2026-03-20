#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

struct Spell
{
    string name;
    int manaCost, dmg;
};

class Enemy
{
protected:
    string name;
    int hp;

public:
    Enemy(string n, int h) : name(n), hp(h) {}

    virtual void attack() const = 0; // pure virtual

    virtual ~Enemy() {};
};

class Goblin : public Enemy
{
public:
    Goblin(string n, int h) : Enemy(n, h) {}

    void attack() const override
    {
        cout << name << " clubbed their opponent!!!\n";
    }
};

class Dragon : public Enemy
{
public:
    Dragon(string n, int h) : Enemy(n, h) {}

    void attack() const override
    {
        cout << name << " talon swiped their opponent!!!\n";
    }
};

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
    Enemy *enemies[2] =
        {
            {new Goblin("Globbor", 67)},
            {new Dragon("Reddy", 670)},
        };

    for (int i = 0; i < size(enemies); i++)
    {
        delete enemies[i];
    }

    return 0;
}