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
};
int main()
{
    Person p1(10);
    Person p2(10);
    Person p3 = p1 + p2;

    cout << "THE AGE OF PERSON 3 IS : " << p3.getAge() << endl;
}