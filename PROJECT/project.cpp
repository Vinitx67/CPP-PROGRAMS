#include <iostream>
using namespace std;

#define MIN_BALANCE 1500
#define MAX_ACCOUNTS 100

class Account
{
private:
    int accNumber;
    string name;
    double balance;
    int indexNum;

public:
    Account()
    {
        // DEFAULT CONSTRUCTOR
    }
    Account(int accNumber, string name, double balance)
    {
        // PARAMETERIZED CONSTRUCTOR
        this->accNumber = accNumber;
        this->name = name;
        this->balance = balance;
    }

    // UTILITY FUNCTIONS
    void deposit(int amount)
    {
        balance = balance + amount;
    }
    void withdraw(int amount)
    {
        balance = balance - amount;
    }

    // GETTERS AND SETTERS
    int getAccNumber()
    {
        return accNumber;
    }

    string getName()
    {
        return name;
    }

    double getBalance()
    {
        return balance;
    }

    int getIndexNum()
    {
        return indexNum;
    }

    void setName(string name)
    {
        this->name = name;
    }

    void setIndexNum(string IndexNum)
    {
        this->indexNum = indexNum;
    }

    void setName(int balance)
    {
        this->balance = balance;
    }
};
class Bank
{
private:
    // ACOUNTS
    static int accNum;
    Account accounts[MAX_ACCOUNTS];
};
int Bank::accNum = 1001;