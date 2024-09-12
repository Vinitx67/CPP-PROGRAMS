// OPERATOR OVERLOADING
#include <iostream>
using namespace std;
class Person
{
private:
    int age;

public:
    Person()
    {
    }

    Person(int age)
    {
        this->age = age;
    }

    int getAge()
    {
        return age;
    }

    void setAge()
    {
        this->age = age;
    }

    // OPERATOR OVERLOAD FOR PERSON
    Person operator>(int)
    {
        Person newPerson;
        newPerson.age > age;
    }

    int main()
    {
    }
}