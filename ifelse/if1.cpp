#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "PLEASE ENTER A NUMBER : ";
    cin >> num;
    if (num >= 0)
    {
        cout << "NUMBER " << num << " IS A POSITIVE NUMBER \n";
    }
    else
    {
        cout << "NUMBER " << num << " IS A NEGATIVE NUMBER \n";
    }
}