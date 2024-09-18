#include <iostream>
using namespace std;
class Person
{
private:
    string firstName;
    string LastName;

public:
    Person(string firstName, string LastName)
    {
        cout << "PARAMETERIZED CONSTRUCTOR OF PERSON \n";
        this->firstName = firstName;
        this->LastName = LastName;
    }

    friend void displayPersonInfo(Person person);
};

void displayPersonInfo(Person person)
{
    cout << "FIRST NAME OF PERSON IS : " << person.firstName << endl;
    cout << "LAST NAME OF PERSON IS : " << person.LastName << endl;
}

int main()
{
    Person p1("VINIT", "VISHWAKARMA");
    displayPersonInfo(p1);

    Person p2("SAMEER", "KHAN");
    displayPersonInfo(p2);
}