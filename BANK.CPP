#include <iostream>
using namespace std;

int main()
{

    float amount, withdraw, deposite, balance = 10000;
    int options;
    char yesno;
    do
    {
        cout << "Welcome to bank of C " << endl;
        cout << "Choose following options : " << endl;
        cout << "1.Check Balance : " << endl;
        cout << "2.Cash Withdraw " << endl;
        cout << "3.Cash Deposite : " << endl;

        cin >> options;

        switch (options)
        {
        case 1:
            cout << "your Account balace is " << balance;
            break;
        case 2:
            cout << "Enter the amount to withdraw :" << endl;
            cin >> withdraw;
           
            if (withdraw > balance)
            {
                cout << "cannot withdraw above balance " << endl;
            }
            else
            {
                balance = balance - withdraw;
                cout << "Amount withdraw succesfully" << endl;
                cout << "AMount Withdrawal successfully " << endl;
                cout << "yuour account balance is " << balance << endl;
            }

            break;

        case 3:
            cout << "enter amount to deposite" << endl;
            cin >> deposite;
            if (deposite < 0)
            {
                cout << "can not deposite less than zero" << endl;
            }
            else
            {
                balance = balance + deposite;
                cout << "Amount deposited successfully " << endl;
                cout << "yuour account balance is " << balance;
            }
            break;

        default:
            cout << "Invalied option seleccted " << endl;
        }

        cout << "\nDo you want to continue :";
        cout << "\ny = yes ";
        cout << "\nn = no \n";
        cin >> yesno;

    } while (yesno == 'y');
    cout << "THANK YOU ";
    return 0;
}
