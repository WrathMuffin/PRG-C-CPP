/*
NAME: CHARLEEN CHU
COURSE: INFR2100U PROGRAMMING IN C/C++
ASSIGNMENT 1: Character System
DATE: FEB 15 2026
*/ 
#include <iostream>
#include <vector>
#include <string>
#include <limits>

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
        cout << "++========================++"<< endl;
        cout << "||   Name:    " << name <<    endl;
        cout << "||   Health:  " << health <<  endl;
        cout << "||   Attack:  " << attack <<  endl;
        cout << "||   Defense: " << defense << endl;
        cout << "++========================++\n"<< endl;
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
        
        while (true)
        {
            cout << "How much HP would your OC #" << i + 1 << " have? ";
            cin >> health;
            
            if (cin.fail() || health < 0)
            {
                cout << "Huh? What is this? Please enter a positive number!" << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignore wat was enstered
            }

            else break;
        }

        while (true)
        {
            cout << "Let's see how strong OC #" << i + 1 << " is! Enter the attack powahhh: ";
            cin >> attack;
            
            if (cin.fail() || attack < 0)
            {
                cout << "Huh? What is this? Please enter a positive numer!" << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignore wat was enstered
            }

            else break;
        }

        while (true)
        {
            cout << "Finally, OC #" << i + 1 << " has to defend themself! Please enter their defense level: ";
            cin >> defense;

            if (cin.fail() || defense < 0)
            {
                cout << "Huh? What is this? Please enter a positive number!" << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignore wat was enstered
            }
            
            else break;
        }

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
        cout << "+------------------------------------------+\n" << endl;
        cout << "         /]]]]]]                            " << endl;
        cout << "    ___ () ,\\/,)                           " << endl;
        cout << "   |O= | \\\\_W_/ <-(SKIBDIDOPDOPDOPYESYES) " << endl;
        cout << "   |___|__| |__                              " << endl;
        cout << "    0=(_ (|_|) )                            " << endl;
        cout << "       )______(                             \n" << endl;
    }

    else
    {
        if (health > 100 && attack < health && defense < health)
        {
            cout << "+-----------------------------+\n" << endl;
            cout << "         /\\/\\                " << endl;
            cout << "        ( `v')                 " << endl;
            cout << "      /88888888\\===(TANK IT)0 " << endl;
            cout << "   /___________________\\      " << endl;
            cout << "   \\(@0o@0o@0o@0o@0o@0)/      \n" << endl;
        }

        if (attack > 100 && health < attack && defense < attack)
        {
            cout << "+---------------------- ---------+\n" << endl;
            cout << "          ROFL:ROFL:ROFL:ROFL   " << endl;
            cout << "              ____/\\____       " << endl;
            cout << "   L     ____/     [(OwO)]\\__   " << endl;
            cout << " L O L==|__ ATTACK ~~~~~~~~~ )  " << endl;
            cout << "   L       )____LOLCOPTER___/=> " <<endl;
            cout << "             .___][_____][__.   " <<endl;
        }

        if (defense > 100 && health < defense && attack < defense)
        {
            cout << "+-----------------+\n" << endl;
            cout << "        A A     ^  " << endl;
            cout << "     __/'w'\\__ /|\\ " << endl;
            cout << "    (_/\\,,,/\\_) |  " << endl;
            cout << "   ( |\\_____/| \\|  " << endl;
            cout << "  (,,) /___\\  \\oO) " << endl;
            cout << "        Y Y     |  " << endl;
        }

        if (health == 1 && attack == 1 && defense == 1)
        {
            cout << "+---+\n" << endl;
            cout << "  O  " << endl;
            cout << " /|\\ " << endl;
            cout << " / \\ " << endl;
        }
    }
}

void DisplayCharacters(const Character *characters, int numChar)
{
    cout << "\nHere are your OC(s)!" << endl;

    for (int i = 0; i < numChar; i++)
    {
        DrawChar(characters[i]);
        
        characters[i].display();
    }
}

void AttackSimulation(Character *characters, int size)
{
    int attackerNum, defenderNum;

    cout << "\nLet's start the fight simulation!" << endl;
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
    
    cout << characters[defenderNum].getName() << " has " << characters[defenderNum].getHealth() << " HP and " << characters[defenderNum].getDefense() << " DEF!" << endl;

        int dmg = characters[attackerNum].getAttack() - characters[defenderNum].getDefense();

        if (dmg < 0)
        {
            dmg = 0;
        }

        characters[defenderNum].takeDamage(dmg);

        cout << characters[attackerNum].getName() << " attacks " << characters[defenderNum].getName() << " for " << dmg << " damage! OUCHIE" << endl;

        //DisplayCharacters(characters, size);
}

int main()
{
    int numChar = 0, inputAction = 0;

    cout << "\nHello! This is a character creator for your OCs!" << endl;

    cout << "Let's start with how many character you want to create: ";
    cin >> numChar;
    Character *characters = new Character[numChar];

    while (inputAction != 4)
    {
        cout << "\nAlrite!\nPlease enter number for your choices:\n1 => Create OC(s) \n2 => Display OC(s)\n3 => Fighting simulation\n4 => EXIT program" << endl;
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
            cout << "Wait...I don't understand? Let's start over then?\n" << endl;
            
            cin.clear();
            cin.ignore(1000, '\n');
        }
    }

    delete[] characters;
    return 0;
}