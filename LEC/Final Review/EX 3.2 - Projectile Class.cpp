#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Bullet
{
    float x, y, speedX, speedY;
    bool isActive;

public:
    Bullet()
    {
        x = 0;
        y = 0;
        speedX = 6.7;
        speedY = 6.7;

        bool isActive = false;
    }

    Bullet(int _posX, int _posY, int _speedX, int _speedY, bool _isActive)
    {
        x = _posX;
        y = _posY;
        speedX = _speedX;
        speedY = _speedY;

        isActive = _isActive;
    }

    void update()
    {
        // time(NULL)
        if (isActive)
        {
            x += speedX;
            y += speedY;
        }
    }

    void deactivate()
    {
        isActive = false;
    }

    bool isBulletActive() const
    {
        return isActive;
    }

    void status()
    {
        cout << "Position (x,y): " << x << ", " << y << "\n";
    }
};

int main()
{
    Bullet b(0, 0, 6, 7, true);

    for (int i = 1; i <= 5; i++)
    {
        b.update();

        if (i == 3)
        {
            b.deactivate();
        }

        cout << "\nFrame: " << i << "\n";
        b.status();
        // nPosition(x, y) : " << b.x << " " << b.y << "\n ";
    }

    return 0;
}