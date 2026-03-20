#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

struct Item
{
    string name;
    int damage;
    float weight;
};

class InvalidItemException
{
    string invalidMsg;

public:
    InvalidItemException(string _invalidMsg)
    {
        invalidMsg = _invalidMsg;
    }

    string getMsg() const { return invalidMsg; }
};

Item loadItem(string name, int damage, float weight)
{
    if (name == "")
    {
        throw InvalidItemException("The name of this is empty!");
    }

    if (damage < 0)
    {
        throw InvalidItemException("Damage cant be lower than 0!");
    }

    if (weight <= 0)
    {
        throw InvalidItemException("Weigth cant be 0 or lower!");
    }

    return {name, damage, weight};
}

int main()
{
    // Test valid item
    try
    {
        Item validItem = loadItem("Sword of the Skibidi", 67, 670);
        cout << "Load item: " << validItem.name << "\nDMG: " << validItem.damage << "\nWGT: " << validItem.weight << "\n";
    }

    catch (InvalidItemException inVal)
    {
        cout << inVal.getMsg() << "\n";
    }

    // Test empty name (should throw)
    try
    {
        Item emptyNameItem = loadItem("", 67, 670);
        cout << "Load item: " << emptyNameItem.name << "\nDMG: " << emptyNameItem.damage << "\nWGT: " << emptyNameItem.weight << "\n";
    }

    catch (InvalidItemException inVal)
    {
        cout << inVal.getMsg() << "\n";
    }

    // Test negative damage (should throw)
    try
    {
        Item negativeDamageItem = loadItem("john janiteur's broom", -67, 670);
        cout << "Load item: " << negativeDamageItem.name << "\nDMG: " << negativeDamageItem.damage << "\nWGT: " << negativeDamageItem.weight << "\n";
    }

    catch (InvalidItemException inVal)
    {
        cout << inVal.getMsg() << "\n";
    }

    return 0;
}