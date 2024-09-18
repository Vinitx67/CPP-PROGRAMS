#include <iostream>
using namespace std;
enum season
{
    Winter = 1,
    Summer = 4,
    Rainy = 8
};
class Demo
{
public:
    season weather;
    void accept()
    {
        int weatherChoice;
        cout << "PLEASE ENTER WEATHER CONDITION : \nPRESS\n1. WINTER\n2. SUMMER\n3. RAINY\n";
        cin >> weatherChoice;
        switch (weatherChoice)
        {
        case 1:
            weather = Winter;
            break;
        case 2:
            weather = Summer;
            break;
        case 3:
            weather = Rainy;
            break;

        default:
            cout << "PLEASE ENTER CORRECT CHOICE\n";
        }
    }
    void display()
    {
        if (weather == 1)
        {
            cout << "WEATHER CONDITION : " << "Winter" << endl;
        }
        else if (weather == 4)
        {
            cout << "WEATHER CONDITION : " << "Summer" << endl;
        }
        else if (weather == 8)
        {
            cout << "WEATHER CONDITION : " << "Rainy" << endl;
        }
    }
};

int main()
{
    Demo d1;
    d1.accept();
    d1.display();
}