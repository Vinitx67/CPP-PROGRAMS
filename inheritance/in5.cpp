// MULTI LEVEL INHERITANCE
#include <iostream>
using namespace std;
class animal
{
public:
    virtual void walk()
    {
        cout << "ANIMAL IS WALKING \n";
    }

    virtual void eat()
    {
        cout << "ANIMAL IS EATING \n";
    }
};

class dog : public animal
{
public:
    virtual void walk()
    {
        cout << "DOG IS WALKING \n";
    }

    virtual void eat()
    {
        cout << "DOG IS EATING \n";
    }
    virtual void bark()
    {
        cout << "DOG IS BARKING \n";
    }
};

class puppy : public dog
{
public:
    void walk()
    {
        cout << "PUPPY IS WALKING \n";
    }

    void eat()
    {
        cout << "PUPPY IS EATING \n";
    }
    void bark()
    {
        cout << "PUPPY IS BARKING \n";
    }
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