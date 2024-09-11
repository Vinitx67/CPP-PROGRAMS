#include <iostream>
using namespace std;
class WaterAnimal
{
public:
    void swin()
    {
        cout << "ANIMAL IS SWIMMING\n";
    }
    void eat()
    {
        cout << "WATER ANIMAL IS EATING\n";
    }
};
class LandAnimal
{
public:
    void walk()
    {
        cout << "ANIMAL IS WALKING\n";
    }
    void eat()
    {
        cout << "LAND ANIMAL IS EATING\n";
    }
};

class Frog : public WaterAnimal, public LandAnimal
{
public:
    void jump()
    {
        cout << "FROG IS JUMPING\n";
    }
    void eat()
    {
        cout << "FROG IS EATING\n";
    }
};

int main()
{
    Frog frog;
    frog.walk();
    frog.swin();
    frog.jump();
    frog.eat();
}