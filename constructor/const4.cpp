#include <iostream>
using namespace std;
// CLASS
class Employee
{
    // FIELDS
    int empID;
    string empName;
    int age;
    string gender;
    double salary;

    // ACCESS MODIFIER
public:
    // DEFAULT PARAMETR
    Employee()
    {
        empID = 101;
        empName = "VINIT VISHWAKARMA";
        age = 21;
        gender = "MALE";
        salary = 50000;
    }

    // PARAMETERIZED CONSTRUCTOR
    Employee(int empID, string empName, int age, string gender, int salary)
    {
        this->empID = empID;
        this->empName = empName;
        this->age = age;
        this->gender = gender;
        this->salary = salary;
    }

    // METHODS

    void displayData()
    {
        cout << "\nPERSON INFORMATION \n";
        cout << "EMPLOYEE ID : " << empID << endl;
        cout << "EMPLOYEE NAME : " << empName << endl;
        cout << "AGE : " << age << endl;
        cout << "GENDER : " << gender << endl;
        cout << "SALARY : " << salary << endl;
    }
};

int main()
{
    // DATA_TYPE VARIABLE_NAME;
    Employee emp1; // REFRENCE VARIABLE OF TYPE PERSON
    Employee emp2(102, "SAMEER KHAN", 22, "MALE", 50000);

    // emp1.acceptData();
    emp1.displayData();
    emp2.displayData();

    return 0;
}