#include <iostream>
using namespace std;
// CLASS
class Person
{
    // ACCESS MODIFIER
protected:
    // FIELDS
    string empName;
    int age;
    string gender;

    // ACCESS MODIFIER
public:
    // DEFAULT CONSTRUCTOR
    Person()
    {
        cout << "DEFAULT CONSTRUCTOR OF PERSON CLASS\n";
    }
    // PARAMETRIZED CONSTRUCTOR
    Person(string empName, int age, string gender)
    {
        cout << "PARAMETRIZED CONSTRUCTOR OF PERSON CLASS\n";
        this->empName = empName;
        this->age = age;
        this->gender = gender;
    }
    // METHODS
    void displayData()
    {
        cout << "\nPERSON INFORMATION \n";
        cout << "EMPLOYEE NAME : " << empName << endl;
        cout << "AGE : " << age << endl;
        cout << "GENDER : " << gender << endl;
    }
};

class Employee : public Person // SINGLE LEVEL INHERITANCE
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
    // PARAMETERIZED CONSTRUCTOR
    Employee(string empName, int age, string gender, int empID, double salary) : Person(empName, age, gender)
    {
        cout << "PARAMETRIZED CONSTRUCTOR OF EMPLOYEE CLASS\n";
        this->empID = empID;
        this->salary = salary;
    }
    // METHODS
    // FUNCTION OVERRIDING : 2 OR MORE FUNCTION WITH SAME NAME ONE IN BASE CLASS AND ONE IN DERIVED CLASS IS CALLED AS FUNCTION OVERLOADING
    void displayData()
    {
        Person::displayData(); // scope
        cout << "\EMPLOYEE INFORMATION \n";
        cout << "EMP ID : " << empID << endl;
        cout << "SALARY : " << salary << endl;
    }
};

class PartEmployee : public Employee
{
private:
    int numOfDays;
    int dailyWages;

public:
    PartEmployee(int numOfDays, int dailyWages)
    {
    }
};
int main()
{
    // DATA_TYPE VARIABLE_NAME;
    Employee emp1("VINIT", 21, "MALE", 1001, 55000); // REFRENCE VARIABLE OF TYPE PERSON
    emp1.displayData();

    return 0;
}