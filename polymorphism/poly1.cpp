#include <iostream>
using namespace std;
class maths
{
public:
    void addition(int n1, int n2)
    {
        cout << "ADDITION OF TWO NUMBER IS : " << (n1 + n2) << endl;
    }
    void addition(int n1, int n2, int n3)
    {
        cout << "ADDITION OF THREE NUMBER IS : " << (n1 + n2 + n3) << endl;
    }
    void addition(double n1, double n2)
    {
        cout << "ADDITION OF TWO DECIMAL NUMBER IS : " << (n1 + n2) << endl;
    }
};

int main()
{
    maths m1;
    m1.addition(5, 4);
    m1.addition(5.4, 4.5);
    m1.addition(5, 4, 3);
}