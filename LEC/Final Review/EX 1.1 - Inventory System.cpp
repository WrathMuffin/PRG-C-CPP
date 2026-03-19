#include <iostream>
#include <string>
#include <cmath>

using namespace std;

struct Item
{
    string name;
    int damage;
    float weight;
};

void printItem(Item item)
{
    // print name, damage, and weigth from strucst
    cout << "\nNAME: " << item.name << "\nDMG: " << item.damage << "\nWGT: " << item.weight << "\n";
}

float totalWeight(Item items[], int count)
{
    float totalWeight = 0.0f;

    for (int i = 0; i < count; i++)
    {
        totalWeight += items[i].weight;
    }

    return totalWeight;
}

int main()
{
    /*  items[0].name = "sixseven dagger",
        items[0].damage = 67,
        items[0].weight = 67,

        items[1].name = "john janitor's broom",
        items[1].damage = 6790,
        items[1].weight = 1,

        items[2].name = "persona 5";
        items[2].damage = 20;
        items[2].weight = 16;
    */

    // well this is much cleanser... TIL ig
    Item items[3] =
        {
            {"sixseven dagger", 67, 67},
            {"john janitor's broom", 6790, 3},
            {"persona 5", 20, 16},
        };

    printItem(items[0]);
    printItem(items[1]);
    printItem(items[2]);

    cout << "\nTotal weight of all items: " << totalWeight(items, size(items)) << "\n";

    return 0;
}