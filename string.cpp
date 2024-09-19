#include <iostream>
using namespace std;

int main()
{
    string myStr = "HELLO";
    cout << "LENGTH OF STRING IS : " << myStr.length() << endl;
    cout << "VALUE OF STRING IS : " << myStr << endl;

    myStr.push_back(' ');
    myStr.push_back('S');
    myStr.push_back('P');
    myStr.push_back('R');
    myStr.push_back('K');
    cout << "LENGTH OF STRING IS : " << myStr.length() << endl;
    cout << "VALUE OF STRING IS : " << myStr << endl;

    myStr.append(" GOOD");
    cout << "LENGTH OF STRING IS : " << myStr.length() << endl;
    cout << "VALUE OF STRING IS : " << myStr << endl;

    myStr.pop_back();
    myStr.pop_back();
    cout << "LENGTH OF STRING IS : " << myStr.length() << endl;
    cout << "VALUE OF STRING IS : " << myStr << endl;
}