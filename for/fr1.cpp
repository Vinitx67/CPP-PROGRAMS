#include <iostream>
using namespace std;
int main()
{
    int n, i, sum = 0;
    cout << "ENTER A NUMBER : ";
    cin >> n;
    for (i = 1; i <= 10; i++)
    {
        sum += i;
    }
    cout << "THE SUM OF FIRST N NATURAL NUMBER IS : " << sum << endl;
}