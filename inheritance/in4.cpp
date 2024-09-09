// MULTI LEVEL INHERITANCE
#include <iostream>
using namespace std;
class animal
{
public:
    void walk()
    {
        cout << "ANIMAL IS WALKING \n";
    }

    void eat()
    {
        cout << "ANIMAL IS EATING \n";
    }
};

class dog : public animal
{
public:
    void bark()
    {
        cout << "DOG IS BARKING \n";
    }
};

class puppy : public dog
{
public:
    void wheep()
    {
        cout << "PUPPY IS WHEEPING \n";
    }
};

int main()
{
    puppy p1;
    p1.bark();
    p1.eat();
    p1.walk();
    p1.wheep();

    dog d1;
    d1.walk();
    d1.eat();
    d1.bark();
}