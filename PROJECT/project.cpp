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

    void setIndexNum(int IndexNum)
    {
        this->indexNum = indexNum;
    }

    void setBalance(int balance)
    {
        this->balance = balance;
    }

    void displayData()
    {
        cout << "ACCOUNT NUMBER : " << accNumber << endl;
        cout << "ACCOUNT NAME : " << name << endl;
        cout << "ACCOUNT BALANCE : " << balance << endl;
        cout << "INDEX NUMBER : " << indexNum << endl;
    }
};
class Bank
{
private:
    // ACOUNTS
    static int accNum;
    static int index;
    Account accounts[MAX_ACCOUNTS];

public:
    void createAccount(string name, double amount)
    {
        if (index < MAX_ACCOUNTS)
        {
            if (amount >= MIN_BALANCE)
            {
                Account accountObj(accNum, name, amount);
                accountObj.setIndexNum(index);
                accounts[index] = accountObj;
                cout << "ACCOUNT CREATED SUCCESSFULLY !!!\n";
                accountObj.displayData();
                accNum++;
                index++;
            }
            else
            {
                cout << "PLEASE ENTER AMOUNT MORE THAN " << MIN_BALANCE << " !!!" << endl;
            }
        }
        else
        {
            cout << "CURRENTLY OUT OF SERVICE !!! \n";
        }
    }

    Account getAccountByAccNum(int accountNumber)
    {
        // SEARCH FROM ARRAY
        for (int i = 0; i < index; i++)
        {
            if (accounts[i].getAccNumber() == accountNumber)
            {
                return accounts[i];
            }
        }
        Account dummyAccount;
        dummyAccount.setIndexNum(-1);
        return dummyAccount;
    }

    void depositAmount(double amount, int accountNumber)
    {
        Account existingAccount = getAccountByAccNum(accountNumber);
        if (existingAccount.getIndexNum() == -1)
        {
            cout << "ACCOUNT WITH ACCOUNT NUMBER " << accountNumber << " DOESN'T EXISTS !!!\n";
        }
        else
        {
            existingAccount.deposit(amount);
            int existingAccountIndex = existingAccount.getIndexNum();
            accounts[existingAccountIndex] = existingAccount;
            cout << "AMOUNT " << amount << " CREDITED SUCCESSFULLY AND THE AVAILABLE BALANCE IS " << existingAccount.getBalance() << endl;
        }
    }
};
int Bank::accNum = 1001;
int Bank::index = 0;

int main()
{
    Bank bank;
    bank.createAccount("VINIT", 3000);
    bank.createAccount("SAMEER", 2000);

    cout << "FINDING ACCOUNTS BY ACCOUNT NUMBER : \n";
    bank.getAccountByAccNum(1001).displayData();

    bank.depositAmount(3000, 1002);
    cout << "FINDING ACCOUNTS BY ACCOUNT NUMBER : \n";
    bank.getAccountByAccNum(1002).displayData();
}