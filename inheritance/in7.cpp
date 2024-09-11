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

    virtual void displayData() = 0;
    virtual void calculateSalary() = 0;
};

class Employee : public Person // SINGLE LEVEL INHERITANCE
{
    // ACCESS MODIFIER
protected:
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

    void calculateSalary()
    {
        if (salary >= 15000)
        {
            cout << "10% TDS DEDUCTED !!! \n";
            salary = salary - 0.1 * salary;
        }
        else
        {
            cout << "NO TDS DEDUCTED !!! \n";
        }
    }
    // FUNCTION OVERRIDING : 2 OR MORE FUNCTION WITH SAME NAME ONE IN BASE CLASS AND ONE IN DERIVED CLASS IS CALLED AS FUNCTION OVERLOADING
    void displayData()
    {

        cout << "n\EMPLOYEE INFORMATION \n";
        cout << "NAME : " << empName << endl;
        cout << "AGE : " << age << endl;
        cout << "GENDER : " << gender << endl;
        cout << "EMP ID : " << empID << endl;
        cout << "SALARY : " << salary << endl;
    }
};

class PartEmployee : public Employee
{
private:
    double dailyWages;
    int numOfDays;

public:
    PartEmployee()
    {
        cout << "DEFAULT CONSTRUCTOR OF PART EMPLOYEE CLASS\n";
    }
    PartEmployee(string empName, int age, string gender, int empID, int numOfDays, double dailyWages) : Employee(empName, age, gender, empID, numOfDays * dailyWages)
    {
        cout << "PARAMETERIZED CONSTRUCTOR OF PART EMPLOYEE CLASS\n";
        this->numOfDays = numOfDays;
        this->dailyWages = dailyWages;
    }

    void displayData()
    {
        cout << "\nPART EMPLOYEE INFORMATION \n";
        cout << "DAILY WAGES : " << dailyWages << endl;
        cout << "NUMBER OF DAYS : " << numOfDays << endl;
    }

    void calculateSalary()
    {
        cout << "NO TDS DETECTED\n";
    }
};
int main()
{
    // DATA_TYPE VARIABLE_NAME;
    PartEmployee pt1("VINIT", 21, "MALE", 1001, 50, 2000); // REFRENCE VARIABLE OF TYPE PERSON
    pt1.calculateSalary();
    pt1.displayData();

    return 0;
}