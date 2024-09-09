// MULTI LEVEL INHERITANCE
#include <iostream>
using namespace std;
class animal
{
    // abstract claass minimum 1 abstract function (pure virtual function)
public:
    // only declaration
    virtual void walk() = 0;
    virtual void eat() = 0;
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
    // animal al;
    // a1.walk();
    // a1.eat();

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