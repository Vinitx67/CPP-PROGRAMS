#include <iostream>
using namespace std;
int main()
{
    int n, i, j;
    cout << "ENTER A NUMBER : ";
    cin >> n;

    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}