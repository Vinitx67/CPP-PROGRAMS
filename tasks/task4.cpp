// WAP to find the diagonal of a matrix
// Input:
// -1 0 10
//  5 3 6
//  9 8 2
// Output:
// Diagonal: -1, 3, 2
// Secondary Diagonal: 10, 3, 9
#include <iostream>
using namespace std;
int main()
{
    int rows = 3, cols = 3;
    int matrix[rows][cols] = {{-1, 0, 10}, {5, 3, 6}, {9, 8, 2}};

    cout << "PRIMARY DIAGONAL IS : ";
    for (int i = 0; i < rows; i++)
    {
        cout << matrix[i][i] << " ";
    }
    cout << endl;

    cout << "SECONDARY DIAGONAL IS : ";
    for (int j = 0; j < rows; j++)
    {
        cout << matrix[j][cols - 1 - j] << " ";
    }
    cout << endl;

    return 0;
}