#include <iostream>
#include <fstream>
#include <cctype>
#include <iomanip>
#include "account_creation.h"
#include "account_functions.h"
// Code like its python, treat header files like API's and library imports 

using namespace std;


int main()
{
    char ch;
    int num;
    intro();

    // cout << "\a";

    while (ch != '8')
    {

        system("cls");
        cout << "\n\n\n\tMAIN MENU";
        cout << "\n\n\t01. NEW ACCOUNT";
        cout << "\n\n\t02. DEPOSIT AMOUNT";
        cout << "\n\n\t03. WITHDRAW AMOUNT";
        cout << "\n\n\t04. BALANCE ENQUIRY";
        cout << "\n\n\t05. ALL ACCOUNT HOLDER LIST";
        cout << "\n\n\t06. CLOSE AN ACCOUNT";
        cout << "\n\n\t07. MODIFY AN ACCOUNT";
        cout << "\n\n\t08. EXIT";
        cout << "\n\n\tSelect Your Option (1-8) ";
        cin >> ch;
        system("cls");

        if (ch == '1')
        {
            write_account();
            break;
        }
        else if (ch == '2')
        {
            cout << "\n\n\tEnter The account No. : ";
            cin >> num;
            deposit_withdraw(num, 1);
            break;
        }
        else if (ch == '3')
        {
            cout << "\n\n\tEnter The account No. : ";
            cin >> num;
            deposit_withdraw(num, 2);
            break;
        }
        else if (ch == '4')
        {
            cout << "\n\n\tEnter The account No. : ";
            cin >> num;
            display_sp(num);
            break;
        }
        else if (ch == '5')
        {
            display_all();
            break;
        }
        else if (ch == '6')
        {
            cout << "\n\n\tEnter The account No. : ";
            cin >> num;
            delete_account(num);
            break;
        }
        else if (ch == '7')
        {
            cout << "\n\n\tEnter The account No. : ";
            cin >> num;
            modify_account(num);
            break;
        }
        else if (ch == '8')
        {
            cout << "\n\n\tThanks for using bank managemnt system";
            break;
        }
        else
        {
            cout << "\a";
        };

        cin.ignore();
        cin.get();
    };

    return 0;
};

