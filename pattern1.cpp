#include <iostream>
using namespace std;
int main()
{
    int num, i, j, sp;
    cout << "PLEASE ENTER A NUMBER : ";
    cin >> num;

    for (i = 1; i <= num; i++)
    {

        for (sp = 1; sp <= num - i; sp++)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }

        cout << "\n";
    }
}