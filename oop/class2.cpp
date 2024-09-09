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
    Person p1; // REFRENCE VARIABLE OF TYPE PERSON

    cout << "PLEASE ENTER A NAME : ";
    cin >> p1.name;
    cout << "PLEASE ENTER A AGE : ";
    cin >> p1.age;
    cout << "PLEASE ENTER A GENDER : ";
    cin >> p1.gender;

    cout << "PERSON INFORMATION \n";
    cout << "NAME : " << p1.name << endl;
    cout << "AGE : " << p1.age << endl;
    cout << "GENDER : " << p1.gender << endl;
    return 0;
}