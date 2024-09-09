#include <iostream>
using namespace std;
int main()
{
    int arr[] = {5, 1, 7, 9, 3};

    int length = sizeof(arr) / sizeof(int);

    for (int i = length - 1; i >= 0; i--)
    {
        cout << arr[i] << "\t";
    }
}