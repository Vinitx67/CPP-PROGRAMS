#include <iostream>
#include "project-header.h"
using namespace std;

int main()
{
    Bank bank;
    bool isActive = true;

    int accNumber;
    int choice;
    double amount;
    string name;

    while (isActive)
    {
        cout << "PLEASE SELECT THE AVAILABLE CHOICE :\n1. CREATE ACCOUNT\n2. SEARCH ACCOUNT\n3. WITHDRAW AMOUNT\n4. DEPOSIT AMOUNT\n5. TRANSFER AMOUNT\n6. EXIT\n";
        cin >> choice;
        fflush(stdin);

        switch (choice)
        {
        case 1:
            cout << "PLEASE ENTER YOUR NAME : ";
            getline(cin, name);
            cout << "PLEASE ENTER AMOUNT, MINIMUM AMOUNT IS " << MIN_BALANCE << " : ";
            cin >> amount;
            bank.createAccount(name, amount);
            break;
        case 2:
            if (isAccountPresent(bank))
            {
                cout << "PLEASE ENTER YOUR ACCOUNT NUMBER : ";
                cin >> accNumber;
                Account account = bank.getAccountByAccNum(accNumber);
                if (account.getIndexNum() == -1)
                {
                    cout << "ACCOUNT WITH ACCOUNT NUMBER : " << accNumber << " DOESN'T EXISTS !!!\n";
                }
                else
                {
                    account.displayData();
                }
            }
            else
            {
                cout << "FIRST CREATE A ACCOUNT !!!\n";
            }
            break;
        case 3:
            if (isAccountPresent(bank))
            {
                cout << "PLEASE ENTER YOUR ACCOUNT NUMBER : ";
                cin >> accNumber;
                Account account = bank.getAccountByAccNum(accNumber);
                if (account.getIndexNum() == -1)
                {
                    cout << "ACCOUNT WITH ACCOUNT NUMBER : " << accNumber << " DOESN'T EXISTS !!!\n";
                }
                else
                {
                    cout << "PLEASE ENTER AMOUNT TO WITHDRAW : ";
                    cin >> amount;
                    bank.withdrawAmount(amount, accNumber);
                }
            }
            else
            {
                cout << "FIRST CREATE A ACCOUNT !!!\n";
            }
            break;
        case 4:
            if (isAccountPresent(bank))
            {
                cout << "PLEASE ENTER YOUR ACCOUNT NUMBER : ";
                cin >> accNumber;
                Account account = bank.getAccountByAccNum(accNumber);
                if (account.getIndexNum() == -1)
                {
                    cout << "ACCOUNT WITH ACCOUNT NUMBER : " << accNumber << " DOESN'T EXISTS !!!\n";
                }
                else
                {
                    cout << "PLEASE ENTER AMOUNT TO DEPOSIT : ";
                    cin >> amount;
                    bank.depositAmount(amount, accNumber);
                }
            }
            else
            {
                cout << "FIRST CREATE A ACCOUNT !!!\n";
            }
            break;
        case 5:
            if (isAccountPresent(bank))
            {
                int fromAccountNumber, toAccountNumber;
                cout << "PLEASE ENTER SOURCE ACCOUNT NUMBER : ";
                cin >> fromAccountNumber;
                Account account = bank.getAccountByAccNum(fromAccountNumber);
                if (account.getIndexNum() == -1)
                {
                    cout << "ACCOUNT WITH ACCOUNT NUMBER " << fromAccountNumber << " DOESN'T EXISTS !!!\n";
                }
                else
                {
                    cout << "PLEASE ENTER DESTINATION ACCOUNT NUMBER : ";
                    cin >> toAccountNumber;
                    Account account = bank.getAccountByAccNum(toAccountNumber);
                    if (account.getIndexNum() == -1)
                    {
                        cout << "ACCOUNT WITH ACCOUNT NUMBER " << toAccountNumber << " DOESN'T EXISTS !!!\n";
                    }
                    else
                    {
                        cout << "PLEASE ENTER AMOUNT TO TRANSFER : ";
                        cin >> amount;
                        bank.transferAmount(fromAccountNumber, toAccountNumber, amount);
                    }
                }
            }
            else
            {
                cout << "FIRST CREATE A ACCOUNT !!!\n";
            }
            break;
        case 6:
            cout << "THANKS FOR USING OUR BANK !!!\n";
            isActive = false;
            break;
        default:
            cout << "PLEASE SELECT THE CORRECT OPTION !!!\n";
        }
    }
}