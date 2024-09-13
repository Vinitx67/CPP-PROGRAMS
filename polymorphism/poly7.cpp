// OPERATOR OVERLOADING
#include <iostream>
using namespace std;
class Person
{
private:
    int x1;
    int x2;

public:
    Person()
    {
    }

    Person(int x1, int x2)
    {
        this->x1 = x1;
        this->x2 = x2;
    }

    int getX1()
    {
        return x1;
    }

    int getX2()
    {
        return x2;
    }

    // OPERATOR OVERLOAD FOR PERSON
    Person operator+(Person person)
    {
        Person newPerosn;
        newPerosn.x1 = x1 + person.x1;
        newPerosn.x2 = x2 + person.x2;
        return newPerosn;
    }

    void display()
    {
        cout << "INFORMATION : \n";
        cout << "x1 = " << x1 << endl;
        cout << "x1 = " << x2 << endl;
    }
};
int main()
{
    Person p1(10, 5);
    Person p2(-5, -15);

    Person p3 = p1 + p2;

    p3.display();

    return 0;
}