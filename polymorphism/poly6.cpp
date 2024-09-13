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
    bool operator>(Person person)
    {
        if (age > person.age)
        {
            return true;
        }
        return false;
    }
};
int main()
{
    Person p1(20);
    Person p2(40);
    if (p1 > p2)
    {
        cout << "P1 IS OLDER THAN P2 AND AGE IS : " << p1.getAge() << endl;
    }
    else
    {
        cout << "P2 IS OLDER THAN P1 AND AGE IS " << p2.getAge() << endl;
    }
    return 0;
}