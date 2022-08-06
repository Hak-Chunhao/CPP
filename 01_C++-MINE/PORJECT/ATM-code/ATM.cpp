#include <iostream>
#include <iomanip> // set number after decimal and make it fixed
#include <conio.h>
#include <windows.h> // check color header file
using namespace std;

void showHeader();
void showMenu();
void exitFromTheProgram();
void process();
void goodBye();

int main()
{
	int pin, pwd = 1234, limit = 0;
	int opt, choice;
	bool isTrue = true;
	// bool yn = true;
	// double balance = 10;
	// cout << fixed << setprecision(2);
	// system("color 4f");
	do
	{
		// if password is not correct, it lets you try again, but only 3 times
		cout << "Enter the pin: ";
		cin >> pin;
		// check password
		if (pin == pwd)
		{
			// if use don't press 4, it will loop again and again
			process();
		}
		// Wrong pin limit
		else
		{
			limit++;
			if (limit == 3)
			{
				isTrue = false;
			}
			else
			{
				cout << "Wrong pin" << endl;
				system("pause");
				system("cls");
			}
		}
		//---------------------------------
	} while (isTrue != false);
	goodBye();
	return 0;
};

void showMenu()
{
	cout << "\t\t\t\t     ATM Bank Machine" << endl;
	cout << "-------- Menu --------" << endl;
	cout << " 1. Deposit" << endl;
	cout << " 2. Withdraw" << endl;
	cout << " 3. Check balance" << endl;
	cout << " 4. Exit" << endl;
	cout << "----------------------" << endl;
	cout << " Choose the option: ";
}

void goodBye()
{
	cout << "Please take out your card and insert it again!!!!" << endl;
	cout << "If you already done with your transaction bye bye, see you next time!!" << endl;
}

void exitFromTheProgram()
{
	cout << "would your like to see your money amount" << endl;
	cout << "1. Yes" << endl;
	cout << "2. No" << endl;
}

void process()
{
	short int opt;
	short int choice;
	double balance = 10;
	bool yn = true;
	bool isTrue = true;
	cout << fixed << setprecision(2);
	do
	{
		showMenu();
		cin >> opt;
		system("cls");
		switch (opt)
		{
			// deposit
		case 1:
			cout << "Deposit amount: ";
			double depositAmount;
			cin >> depositAmount;
			if (depositAmount <= 0)
			{
				cout << "Error" << endl; //
			}

			else
			{
				balance += depositAmount;
			}
			break;
			// withdraw
		case 2:
			cout << "Withdraw amount: ";
			double withdrawAmount;
			cin >> withdrawAmount;
			if (withdrawAmount <= balance && withdrawAmount > 0)
			{
				balance -= withdrawAmount;
				// tell use that their account can not have less than 10 dollars
				if (balance < 10)
				{
					cout << "You need to have at least 10 dollars in your bank account!!" << endl;
					balance += withdrawAmount;
				}
				else
				{
					// ask the user whether they want to see their account money after withdraw
					do
					{
						system("cls");
						exitFromTheProgram();
						cin >> choice;
						if (choice == 1)
						{
							cout << "Balance is: " << balance << " $ " << endl;
							yn = false;
						}
						else if (choice == 2)
						{
							// cout<<"See you next time"<<endl;
							yn = false;
						}
						else
						{
							cout << "Error" << endl;
							system("pause");
						}
					} while (yn != false);
				}
			}
			else if (withdrawAmount <= 0)
			{
				cout << "Error" << endl;
			}
			else
			{
				cout << "Not enough money" << endl;
			}
			break;
			// check balance
		case 3:
			cout << "Balance is: " << balance << " $ " << endl;
			break;
			// exit
		case 4:
			isTrue = false;
			break;
		default:
			cout << "out of option" << endl;
			break;
		}
	} while (isTrue != false);
}

void yn()
{
	double balance = 10;
	bool yn = true;
	int choice;
	do
	{
		system("cls");
		cout << "would your like to see your money amount" << endl;
		cout << "1. Yes" << endl;
		cout << "2. No" << endl;
		cin >> choice;
		if (choice == 1)
		{
			cout << "Balance is: " << balance << " $ " << endl;
			yn = false;
		}
		else if (choice == 2)
		{
			// cout<<"See you next time"<<endl;
			yn = false;
		}
		else
		{
			cout << "Error" << endl;
			system("pause");
		}
	} while (yn != false);
}
