#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

class BoxOfProduce
{
private:
    /* data */
public:
    BoxOfProduce(/* args */);
    ~BoxOfProduce();
};

BoxOfProduce::BoxOfProduce(/* args */)
{
}

BoxOfProduce::~BoxOfProduce()
{
}


int main() 
{
    ifstream inputFile("produce.txt");
    
    string pool[5];

    if (inputFile.is_open()) 
    {
        for (int i = 0; i < 5; i++) 
        {
            getline(inputFile, pool[i]);
        }
        
        inputFile.close();
    } 
    
    else 
    {
        cout << "Unable to open file";
        return 1;
    }

    srand(time(0)); // Seed the random number generator with the current time

    BoxOfProduce box;
    box.fillBox(pool, 5);

    cout << "Box curently filled with: " << endl;

    return 0;
}