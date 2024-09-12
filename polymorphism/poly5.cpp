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
    Person operator+(Person person)
    {
        Person newPerson;
        newPerson.age = age + person.age;
        return newPerson;
    }

    void operator+=(Person person)
    {
        Person newPerson;
        age += person.age;
    }
};
int main()
{
    Person p1(10);
    Person p2(5);
    cout << "THE VALUE OF AGE IN P1 IS : " << p1.getAge() << endl;
    cout << "THE VALUE OF AGE IN P2 IS : " << p2.getAge() << endl;
    p1 += p2;
    cout << "THE VALUE OF AGE IN P1 AFTER += IS : " << p1.getAge() << endl;
    cout << "THE VALUE OF AGE IN P2 AFTER += IS : " << p2.getAge() << endl;
}