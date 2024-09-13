#include <iostream>
using namespace std;
void demoFN()
{
    static int i = 1;
    // int i = 1;
    cout << "VALUE OF i IS : " << i << endl;
    i++;
}
int main()
{
    demoFN();
    demoFN();
    demoFN();
}