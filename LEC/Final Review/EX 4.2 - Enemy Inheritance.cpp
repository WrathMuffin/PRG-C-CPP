#include <iostream>
#include <string>
#include <cmath>

using namespace std;

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

int main()
{
    Enemy *enemies[2] =
        {
            {new Goblin("Globbor", 67)},
            {new Dragon("Reddy", 670)},
        };

    for (int i = 0; i < size(enemies); i++)
    {
        enemies[i]->attack();
    }

    for (int i = 0; i < size(enemies); i++)
    {
        delete enemies[i];
    }
    return 0;
}