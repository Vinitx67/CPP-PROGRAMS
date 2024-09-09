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
    // DEFAULT CONSTRUCTOR
    Person()
    {
        cout << "DEFAULT CONSTRUCTOR OF PERSON CLASS \n";
    }

    // GETTERS AND SETTERS

    // SETTER FOR NAME
    void setName(string n)
    {
        name = n;
    }
    // GETTER FOR NAME
    string getName()
    {
        return name;
    }

    // SETTER FOR AGE
    void setAge(int a)
    {
        age = a;
    }
    // GETTER FOR AGE
    int getAge()
    {
        return age;
    }

    // SETTER FOR GENDER
    void setGender(string g)
    {
        gender = g;
    }
    // GETTER FOR GENDER
    string getGender()
    {
        return gender;
    }
};
int main()
{
    // DATA_TYPE VARIABLE_NAME;
    Person p1; // REFRENCE VARIABLE OF TYPE PERSON
    p1.setName("VINIT VISHWAKRMA");
    p1.setAge(20);
    p1.setGender("MALE");

    cout << "\nPERSON INFORMATION \n";
    cout << "NAME : " << p1.getName() << endl;
    cout << "AGE : " << p1.getAge() << endl;
    cout << "GENDER : " << p1.getGender() << endl;

    return 0;
}