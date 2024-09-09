#include <iostream>
using namespace std;
int main()
{
    int day;
    cout << "ENTER A NUMBER : ";
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "MONDAY\n";
        break;
    case 2:
        cout << "TUESDAY\n";
        break;
    case 3:
        cout << "WEDNESDAY\n";
        break;
    case 4:
        cout << "THURSDAY\n";
        break;
    case 5:
        cout << "FRIDAY\n";
        break;
    case 6:
        cout << "SATURDAY\n";
        break;
    case 7:
        cout << "SUNDAY\n";
        break;
    default:
        cout << "PLEASE ENTER CORRECT DAY NUMBER ...";
    }
}