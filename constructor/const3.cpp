#include <iostream>
using namespace std;
// CLASS
class Person
{
    // FIELDS
    string name;
    int age;
    string gender;

    // ACCESS MODIFIER
public:
    // PUBLIC CONSTRUCTOR
    Person()
    {
        cout << "DEFAULT CONSTRUCTOR OF PERSON CLASS";
        name = "VINIT";
        age = 21;
        gender = "MALE";
    }

    // PARAMETERIZED CONSTRUCTOR
    Person(string name, int age, string gender)
    {
        cout << "PARAMETERIZED CONSTRUCTOR OF PERSON CLASS";
        this->name = name;
        this->age = age;
        this->gender = gender;
    }

    // METHODS

    void displayData()
    {
        cout << "\nPERSON INFORMATION \n";
        cout << "NAME : " << name << endl;
        cout << "AGE : " << age << endl;
        cout << "GENDER : " << gender << endl;
    }
};
int main()
{
    // DATA_TYPE VARIABLE_NAME;
    Person p1; // REFRENCE VARIABLE OF TYPE PERSON

    Person p2("VINIT", 22, "MALE");

    p1.displayData();
    p2.displayData();
    return 0;
}
