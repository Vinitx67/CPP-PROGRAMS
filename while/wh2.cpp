#include <iostream>
using namespace std;
int main()
{
    int n, result;
    cout << "ENTER A NUMBER :";
    cin >> n;
    int i = 1;
    while (i <= 10)
    {
        result = n * i;
        cout << n << "x" << i << " = " << result << endl;
        // cout << n << " x " << i << " = " << n * i << endl;
        i++;
    }
}