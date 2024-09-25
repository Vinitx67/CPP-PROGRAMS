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

    void setIndexNum(int indexNum)
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
        // cout << "INDEX NUMBER : " << indexNum << endl;
    }
};
class Bank
{
private:
    // ACOUNTS
    Account accounts[MAX_ACCOUNTS];

public:
    static int accNum;
    static int index;
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

    void withdrawAmount(double amount, int accountNumber)
    {
        Account existingAccount = getAccountByAccNum(accountNumber);
        if (existingAccount.getIndexNum() == -1)
        {
            cout << "ACCOUNT WITH ACCOUNT NUMBER " << accountNumber << " DOESN'T EXISTS !!!\n";
        }
        else
        {
            double existingAmount = existingAccount.getBalance();
            if (existingAmount - amount >= MIN_BALANCE)
            {
                existingAccount.withdraw(amount);
                int existingAccountIndex = existingAccount.getIndexNum();
                accounts[existingAccountIndex] = existingAccount;
                cout << "AMOUNT " << amount << " DEBITED SUCCESSFULLY AND THE AVAILABLE BALANCE IS " << existingAccount.getBalance() << endl;
            }
            else
            {
                cout << "INSUFFICIENT BALANCE. YOUR BALANCE IS " << existingAmount << " YOU ARE TRYING TO WITHDRAW AMOUNT " << amount << endl;
            }
        }
    }

    void transferAmount(int fromAccountNumber, int toAccountNumber, double amount)
    {
        Account fromAccount = getAccountByAccNum(fromAccountNumber);
        Account toAccount = getAccountByAccNum(toAccountNumber);

        if (fromAccount.getIndexNum() == -1)
        {
            cout << "SOURCE ACCOUNT WITH ACCOUNT NUMBER " << fromAccountNumber << " DOESN'T EXISTS !!!\n";
        }
        if (toAccount.getIndexNum() == -1)
        {
            cout << "DESTINATION ACCOUNT WITH ACCOUNT NUMBER " << toAccountNumber << " DOESN'T EXISTS !!!\n";
        }

        if (fromAccount.getBalance() - amount >= MIN_BALANCE)
        {
            fromAccount.withdraw(amount);
            toAccount.deposit(amount);

            accounts[fromAccount.getIndexNum()] = fromAccount;
            accounts[toAccount.getIndexNum()] = toAccount;

            cout << "AMOUNT " << amount << " TRANSFERRED SUCCESSFULLY FROM ACCOUNT " << fromAccountNumber << " TO ACCOUNT " << toAccountNumber << endl;
            cout << "REMAINING BALANCE IN SOURCE ACCOUNT " << fromAccountNumber << " IS : " << fromAccount.getBalance() << endl;
        }
        else
        {
            cout << "INSUFFICIENT BALANCE IN SOURCE ACCOUNT. CURRENT BALANCE IS : " << fromAccount.getBalance() << " YOU ARE TRYING TO TRANSFER AMOUNT " << amount << endl;
        }
    }
};

int Bank::accNum = 1001;
int Bank::index = 0;

bool isAccountPresent(Bank bank)
{
    if (bank.index > 0)
    {
        return true;
    }
    return false;
}