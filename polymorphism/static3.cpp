#include <iostream>
using namespace std;
class demo
{
public:
    static int num;
    static string className;
    demo()
    {
        cout << "OBJ CREATED AND TOTAL NUM OF OBJ ARE : " << num << endl;
        cout << "CLASS NAME IS : " << className << endl;
        num++;
    }
};
int demo::num = 1;
string demo::className = "SPARK TECH";

int main()
{
    demo d1;
    demo d2;
    demo d3;
}