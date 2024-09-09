#include <iostream>
using namespace std;
// CLASS
class Person
{
    // ACCESS MODIFIER
public:
    // FIELDS
    string name;
    int age;
    string gender;

    // METHODS
};
int main()
{
    // DATA_TYPE VARIABLE_NAME;
    Person p1, p2; // REFRENCE VARIABLE OF TYPE PERSON
    p1.name = "VINIT";
    p1.age = 21;
    p1.gender = "MALE";

    cout << "PERSON INFORMATION \n";
    cout << "NAME : " << p1.name << endl;
    cout << "AGE : " << p1.age << endl;
    cout << "GENDER : " << p1.gender << endl;

    p2.name = "SAMEER";
    p2.age = 21;
    p2.gender = "MALE";

    cout << "\nPERSON INFORMATION \n";
    cout << "NAME : " << p2.name << endl;
    cout << "AGE : " << p2.age << endl;
    cout << "GENDER : " << p2.gender << endl;

    return 0;
}