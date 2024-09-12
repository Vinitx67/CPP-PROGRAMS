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

    Person operator++(int)
    {
        Person newPerson;
        newPerson.age = age++;
        return newPerson;
    }
};
int main()
{
    Person p1(10);
    cout << "THE VALUE OF P1 -> AGE IS BEFORE INCREMENT : " << p1.getAge() << endl;
    Person p2 = p1++;
    cout << "THE VALUE OF P1 -> AGE IS AFTER INCREMENT : " << p1.getAge() << endl;
    cout << "THE VALUE OF P2 -> AGE IS AFTER INCREMENT : " << p2.getAge() << endl;
}