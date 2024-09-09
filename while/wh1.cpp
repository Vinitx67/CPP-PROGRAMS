#include <iostream>
using namespace std;
int main()
{
    int n, square;
    cout << "ENTER A NUMBER :";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        square = i * i;
        cout << "THE SQUARE OF " << i << " IS " << square << endl;
        i++;
    }
}