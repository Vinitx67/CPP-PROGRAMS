#include <iostream>
using namespace std;
// CLASS
class Employee
{
    // FIELDS
    string empName;
    int age;
    string gender;
    int empID;
    double salary;

    // ACCESS MODIFIER
public:
    // METHODS
    void acceptData()
    {
        cout << "PLEASE ENTER A EMPLOYEE ID : ";
        cin >> empID;
        fflush(stdin);
        cout << "PLEASE ENTER A EMPLOYEE NAME : ";
        getline(cin, empName);
        cout << "PLEASE ENTER A EMPLOYEE AGE : ";
        cin >> age;
        cout << "PLEASE ENTER A EMPLOYEE GENDER : ";
        cin >> gender;
        cout << "PLEASE ENTER A EMPLOYEE SALARY : ";
        cin >> salary;
    }
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

    emp1.acceptData();
    emp1.displayData();

    return 0;
}