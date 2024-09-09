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
    Person(string n, int a, string g)
    {
        cout << "PARAMETERIZED CONSTRUCTOR OF PERSON CLASS";
        name = n;
        age = a;
        gender = g;
    }

    // PARAMETERIZED CONSTRUCTOR
    Person(string n, int a)
    {
        cout << "PARAMETERIZED CONSTRUCTOR OF PERSON CLASS WITHOUT GENDER";
        name = n;
        age = a;
    }

    // METHODS

    // void acceptData()
    // {
    //     cout << "PLEASE ENTER A NAME : ";
    //     cin >> name;
    //     cout << "PLEASE ENTER A AGE : ";
    //     cin >> age;
    //     cout << "PLEASE ENTER A GENDER : ";
    //     cin >> gender;
    // }

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
    Person p1, p2; // REFRENCE VARIABLE OF TYPE PERSON

    // p1.acceptData();
    // p2.acceptData();
    Person p3("VINIT", 22, "MALE");
    Person p4("VINIT", 22);

    p1.displayData();
    p2.displayData();
    p3.displayData();
    p4.displayData();

    return 0;
}
