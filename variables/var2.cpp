// TAKE INPUT STRING
#include <iostream>
using namespace std;
int main()
{
    string name;
    string temp;
    int age;
    cout << "PLEASE ENTER A AGE :";
    cin >> age;
    cout << "PLEASE ENTER A NAME :";
    // cin >> name; //for single line
    // cin >> ws; // for reading all white spaces
    getline(cin, temp);
    getline(cin, name);
    cout << "YOUR AGE IS : " << age << endl;
    cout << "YOUR NAME IS : " << name << endl;
}