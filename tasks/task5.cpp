// WAP to sort a given array.
// Input: 9, 3, -5, 1, 10, -9
// Output: -9, -5, 1, 3, 9, 10
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int arr[] = {9, 3, -5, 1, 10, -9};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + n);

    cout << "SORTED ARRAY : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
