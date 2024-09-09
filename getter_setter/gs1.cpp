#include <iostream>
using namespace std;
// CLASS
class Person
{
protected:
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
class Employee : public Person
{
    // ACCESS MODIFIER
private:
    // FIELDS
    int empID;
    double salary;

public:
    // DEFAULT CONSTRUCTOR
    Employee()
    {
        cout << "DEFAULT CONSTRUCTOR OF EMPLOYEE CLASS\n";
    }
    void setempID(int id)
    {
        empID = id;
    }
    // GETTER FOR NAME
    int getempID()
    {
        return empID;
    }

    // SETTER FOR AGE
    void setSalary(int sal)
    {
        salary = sal;
    }
    // GETTER FOR AGE
    int getSalary()
    {
        return salary;
    }
};
int main()
{
    // DATA_TYPE VARIABLE_NAME;
    Employee p1; // REFRENCE VARIABLE OF TYPE PERSON
    p1.setName("VINIT VISHWAKRMA");
    p1.setAge(20);
    p1.setGender("MALE");
    p1.setempID(1001);
    p1.setSalary(500000);

    cout << "\nPERSON INFORMATION \n";
    cout << "NAME : " << p1.getName() << endl;
    cout << "AGE : " << p1.getAge() << endl;
    cout << "GENDER : " << p1.getGender() << endl;
    cout << "GENDER : " << p1.getempID() << endl;
    cout << "SALARY : " << p1.getSalary() << endl;

    return 0;
}