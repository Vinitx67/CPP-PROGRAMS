#include <iostream>
using namespace std;
int main()
{
    string myStr = "HELLO TODAY IS A GOOD DAY";
    string::iterator it = myStr.begin();
    while (it != myStr.end())
    {
        cout << *it << " ";
        it++;
    }
    string rvStr;
    it = myStr.end();
    while (it != myStr.begin())
    {
        rvStr.push_back(*it);
        it--;
    }
    cout << "\nNORMAL STRING : " << myStr << endl;
    cout << "REVERSE STRING : " << rvStr << endl;

    if (myStr == rvStr)
    {
        cout << "PALINDROME" << endl;
    }
    else
    {
        cout << "NOT PALINDROME" << endl;
    }

    if (myStr.compare(rvStr))
    {
        cout << "PALINDROME" << endl;
    }
    else
    {
        cout << "NOT PALINDROME" << endl;
    }
}