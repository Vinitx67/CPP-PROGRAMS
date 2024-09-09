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
    // METHODS
    void acceptData()
    {
        cout << "PLEASE ENTER A NAME : ";
        cin >> name;
        cout << "PLEASE ENTER A AGE : ";
        cin >> age;
        cout << "PLEASE ENTER A GENDER : ";
        cin >> gender;
    }
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

    p1.acceptData();
    p2.acceptData();

    p1.displayData();
    p2.displayData();

    return 0;
}