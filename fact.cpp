#include <iostream>
using namespace std;
int main()
{
    int n, i, fact = 1;
    cout << "ENTER A NUMBER : ";
    cin >> n;
    for (i = n; i >= 1; i--)
    {
        fact = fact * i;
    }
    cout << "THE FACTORIAL OF " << n << " IS " << fact << endl;
    return 0;
}