#include <iostream>
using namespace std;
int main()
{
    string myStr = "HELLO WORLD";
    string::reverse_iterator rit = myStr.rbegin();
    while (rit != myStr.rend())
    {
        cout << *rit << " ";
        rit++;
    }
}