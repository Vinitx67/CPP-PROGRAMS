// WAP to print below pattern
// 0
// 1 0
// 0 1 0
// 1 0 1 0
// 0 1 0 1 0
#include <iostream>
using namespace std;
int main()
{
    int ptrn = 5;
    for (int i = 1; i <= ptrn; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << "0 ";
            }
            else
            {
                cout << "1 ";
            }
        }
        cout << endl;
    }
}