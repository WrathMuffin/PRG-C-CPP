#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Character
{
public:
    Character()
    {
        name = "SKIBIDI";
        health = 67;
        attack = 67;
        defense = 67;
    }

    Character(string nom, int hp, int atk, int def)
    {
        name = nom;
        health = hp;
        attack = atk;
        defense = def;
    }

    void takeDamage(int amount)
    {
        health -= amount;

        if (health <= 0)
        {
            health = 0;
        }
    }

    void display() const
    {
        cout << "+------------------------+" << defense << endl;
        cout << "   Name: " << name << endl;
        cout << "   Health: " << health << endl;
        cout << "   Attack: " << attack << endl;
        cout << "   Defense: " << defense << endl;
        cout << "+------------------------+" << defense << endl;
    };

    int getHealth() const
    {
        return health;
    }

    int getAttack() const
    {
        return attack;
    }

    int getDefense() const
    {
        return defense;
    }

    string getName() const
    {
        return name;
    }

private:
    string name;
    int health;
    int attack;
    int defense;
};

void CharaCreator(Character *characters, int numChar)
{
    cout << "Alrite! Let's create your OC(s)!" << endl;

    for (int i = 0; i < numChar; i++)
    {
        string name;
        int health, attack, defense;

        cout << "Let's start with the name of OC #" << i + 1 << ": ";
        cin >> name;

        cout << "How much HP would your OC #" << i + 1 << " have? ";
        cin >> health;

        cout << "Let's see how strong OC #" << i + 1 << " is! Enter the attack powahhh: ";
        cin >> attack;

        cout << "Finally, OC #" << i + 1 << " has to defend themself! Please enter their defense level: ";
        cin >> defense;

        characters[i] = Character(name, health, attack, defense);
    }
}

void DrawChar(const Character &character)
{
    string name = character.getName();
    int health = character.getHealth();
    int attack = character.getAttack();
    int defense = character.getDefense();

    if (name == "SKIBIDI" || name == "skibidi")
    {
        cout << "       /]]]]]]   " << endl;
        cout << " ____  (),\\/,)   " << endl;
        cout << "| O= |||\\L∀_/   " << endl;
        cout << "|____|_| |___  " << endl;
        cout << " 0=(  (|_|)  ) " << endl;
        cout << "    \\_______/  " << endl;
        cout << "SKIBIDIDOPDOPDOP" << endl;
    }

    else
    {
        if (health > 100 && attack < health && defense < health)
        {
            cout << "       /\\/\\                " << endl;
            cout << "      ( `v')               " << endl;
            cout << "    /88888888\\===(TANKER)} " << endl;
            cout << " /___________________\\      " << endl;
            cout << " \\(@0_@0_@0_@0_@0_@0)/      " << endl;
        }

        if (attack > 100 && health < attack && defense < attack)
        {
            cout << "" << endl;
            cout << "" << endl;
            cout << "" << endl;
            cout << "" << endl;
        }

        if (defense > 100 && health < defense && attack < defense)
        {
            cout << "" << endl;
            cout << "" << endl;
            cout << "" << endl;
            cout << "" << endl;
        }

        else
        {
            cout << "" << endl;
            cout << "" << endl;
            cout << "" << endl;
            cout << "" << endl;
        }
    }
}

void DisplayCharacters(const Character *characters, int numChar)
{
    cout << "Here are your OC(s)!" << endl;

    for (int i = 0; i < numChar; i++)
    {
        characters[i].display();

        DrawChar(characters[i]);
    }
}

void AttackSimulation(Character *characters, int size)
{
    int attackerNum, defenderNum;

    cout << "Let's start the fight simulation!" << endl;
    cout << "Your characters are: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << i + 1 << " => " << characters[i].getName() << endl;
    }

    cout << "Please select your ATTACKER: " << endl;
    cin >> attackerNum;
    attackerNum -= 1;

    cout << "Please select your DEFENDER: " << endl;
    cin >> defenderNum;
    defenderNum -= 1;

    cout << "---THE FIGHT BEGINS---" << endl;

    if (characters[attackerNum].getHealth() <= 0 && characters[defenderNum].getHealth() <= 0)
    {
        cout << "Both " << characters[attackerNum].getName() << " and " << characters[defenderNum].getName() << " are DEA D! Do you want to revive them? (Y/N) " << endl;

        if (cin.get() == 'Y' || cin.get() == 'y')
        {
            characters[attackerNum] = Character(characters[attackerNum].getName(), 100, characters[attackerNum].getAttack(), characters[attackerNum].getDefense());
            characters[defenderNum] = Character(characters[defenderNum].getName(), 100, characters[defenderNum].getAttack(), characters[defenderNum].getDefense());

            cout << "Both are NOW REVIVED! See you next round!" << endl;
            return;
        }

        else
        {
            cout << "Oh...alrite..." << endl;
            return;
        }
    }

    else
    {
        cout << characters[defenderNum].getName() << " has " << characters[defenderNum].getHealth() << " HP and " << characters[defenderNum].getDefense() << " DEF!" << endl;

        int dmg = characters[attackerNum].getAttack() - characters[defenderNum].getDefense();

        if (dmg < 0)
        {
            dmg = 0;
        }

        characters[defenderNum].takeDamage(dmg);

        cout << characters[attackerNum].getName() << " attacks " << characters[defenderNum].getName() << " for " << dmg << " damage! OUCHIE" << endl;

        cout << characters[defenderNum].getName() << " : " << characters[defenderNum].getHealth() << " HP left" << endl;
    }
}

int main()
{
    int numChar = 0, inputAction = 0;

    cout << "Hello! This is a character creator for your OCs!" << endl;

    cout << "Let's start with how many character you want to create: ";
    cin >> numChar;
    Character *characters = new Character[numChar];

    while (inputAction != 4)
    {
        cout << "Alrite!\nPlease enter number for your choices:\n1 => Create OC(s) \n2 => Display OC(s)\n3 => Fighting simulation\n4 => EXIT program" << endl;
        cin >> inputAction;

        switch (inputAction)
        {
        case 1:
            CharaCreator(characters, numChar);
            break;

        case 2:
            if (numChar > 0)
            {
                DisplayCharacters(characters, numChar);
            }

            else
            {
                cout << "There's no character yet! Please create one first!" << endl;
            }
            break;

        case 3:
            if (numChar > 1)
            {
                AttackSimulation(characters, numChar);
            }

            else
            {
                cout << "You need at least 2 characters to start the fight simulation! Please create more characters!" << endl;
            }
            break;

        case 4:
            cout << ">>>EXITING>>>" << endl;
            break;

        default:
            cout << "Please re-enter what you'd like to do?\n1 => Create OC(s) \n2 => Display OC(s)\n3 => Fighting simulation\n4 => EXIT program" << endl;
        }
    }

    delete[] characters;
    return 0;
}