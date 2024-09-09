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
    Employee(int id, string name, int a, string g, int s)
    {
        empID = id;
        empName = name;
        age = a;
        gender = g;
        salary = s;
    }

    // METHODS

    //     void acceptData()
    // {
    //     cout << "PLEASE ENTER A EMPLOYEE ID : ";
    //     cin >> empID;
    //     fflush(stdin);
    //     cout << "PLEASE ENTER A EMPLOYEE NAME : ";
    //     getline(cin, empName);
    //     cout << "PLEASE ENTER A EMPLOYEE AGE : ";
    //     cin >> age;
    //     cout << "PLEASE ENTER A EMPLOYEE GENDER : ";
    //     cin >> gender;
    //     cout << "PLEASE ENTER A EMPLOYEE SALARY : ";
    //     cin >> salary;
    // }
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