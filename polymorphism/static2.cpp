#include <iostream>
using namespace std;
class demo
{
public:
    static void sayHello()
    {
        cout << "HELLO";
    }
};
int main()
{
    demo::sayHello();
}