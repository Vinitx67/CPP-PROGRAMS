// WAP to find the largest and smallest element in an array of size 10.
#include <iostream>
using namespace std;
int main()
{
    int largest, smallest;
    int arr[] = {4, 5, 77, 65, 2, 9, 89, 65, 32, 25};
    largest = smallest = arr[0];
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    cout << "LARGEST ELEMENT IS : " << largest << endl;
    cout << "SMALLEST ELEMENT IS : " << smallest << endl;
}