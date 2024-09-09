#include <iostream>
using namespace std;
int main()
{
    char alp;
    cout << "PLEASE ENTER A CHARACTER :";
    cin >> alp;
    if (alp == 'a' || alp == 'e' || alp == 'i' || alp == 'o' || alp == 'u' || alp == 'A' || alp == 'E' || alp == 'I' || alp == 'O' || alp == 'U')
    {
        cout << "ENTERED CHARACTER IS A VOWEL \n";
    }
    else
    {
        cout << "ENTERED CHARACTER IS NOT A VOWEL \n";
    }
}