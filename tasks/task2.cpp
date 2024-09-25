// WAP to swap 2 numbers using pointers.
#include <iostream>
using namespace std;
void swap(int *n1, int *n2)
{
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

int main()
{
    int num1, num2;
    cout << "ENTER TWO NUMBERS : ";
    cin >> num1 >> num2;

    cout << "BEFORE SWAPPING :" << endl;
    cout << "NUM 1 : " << num1 << endl;
    cout << "NUM 2 : " << num2 << endl;
    swap(&num1, &num2);
    cout << "AFTER SWAPPING : " << endl;
    cout << "NUM 1 : " << num1 << endl;
    cout << "NUM 2 : " << num2 << endl;
    return 0;
}
