#include <iostream>
using namespace std;
enum gender
{
    Male = 0,
    Female = 1,
    Others = 2
};
class Person
{
public:
    gender personGender;
    void accept()
    {
        int GenderChoice;
        cout << "PLEASE ENTER GENDER : \nPRESS\n1. MALE\n2. FEMALE\n3. OTHERS\n";
        cin >> GenderChoice;
        switch (GenderChoice)
        {
        case 1:
            personGender = Male;
            break;
        case 2:
            personGender = Female;
            break;
        case 3:
            personGender = Others;
            break;

        default:
            cout << "PLEASE ENTER CORRECT CHOICE\n";
        }
    }
    void display()
    {
        if (personGender == 0)
        {
            cout << "GENDER : " << "Male" << endl;
        }
        else if (personGender == 1)
        {
            cout << "GENDER : " << "Female" << endl;
        }
        else if (personGender == 2)
        {
            cout << "GENDER : " << "Others" << endl;
        }
    }
};

int main()
{
    Person p1;
    p1.accept();
    p1.display();
}