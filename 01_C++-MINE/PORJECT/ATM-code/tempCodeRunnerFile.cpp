#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
void showMenu() {
	cout<<"-------- Menu --------"<<endl;
	cout<<" 1. Deposit"<<endl;
	cout<<" 2. Withdraw"<<endl;
	cout<<" 3. Check balance"<<endl;
	cout<<" 4. Exit"<<endl;
	cout<<"----------------------"<<endl;
}
int main() {
	int pin;
	int pwd = 1234;
	int limit = 0;
	int opt;
	int choice;
	bool isTrue, yn = true;
	double balance = 10;
	// if password is not correct, it lets you try again, but only 3 times
	do {
		cout<<"**** Welcome to NAME_BANK ****"<<endl;
		cout<<"Enter pin: ";
		cin>>pin;
		// check password
		if( pin == pwd ) {
			// if use don't press 4, it will loop again and again
			do {
				showMenu();
				cout<<" Choose the option: ";
				cin>>opt;
				system("cls");
				switch(opt) {
						// deposit
					case 1:
						cout<<"Deposit amount: ";
						double depositAmount;
						cin>> depositAmount;
						balance+= depositAmount;
						break;
						// withdraw
					case 2:
						cout<<"Withdraw amount: ";
						double withdrawAmount;
						cin>>withdrawAmount;
						if(withdrawAmount <= balance) {
							balance -= withdrawAmount;
							if(balance < 10) {
								cout<<"You need to have at least 10 dollars in your bank account!!"<<endl;
							} else {
								do{
                                cout<<"would your like to see your money amount"<<endl;
                                cout<<"1. Yes"<<endl;
                                cout<<"2. No"<<endl;
                                cin>>choice;
								if( choice == 1 ){								
								cout<<"Balance is: "<<balance<<" $ "<< endl;
                                yn = false;
							} else if(choice == 2){
								cout<<"See you next time";
                                yn = false;
							}else {
                                cout<<"what is your choice?"<<endl;
                            }
                            }while( yn != false);
						} 
						} else {
							cout<<"Not enough money"<<endl;
						}
						
						break;
						// check balance
					case 3:
						cout<<"Balance is: "<<balance<<" $ "<< endl;
						break;
						//					
						
				}
			} while( opt != 4);
		} 
		// Wrong pin limit
		else {
			limit++;
			if( limit == 3) {
				isTrue = false;

			} else {
				cout<<"Wrong pin"<<endl;
			}
		}
		//---------------------------------
	} while( isTrue != false);
	cout<<fixed<<setprecision(2);
	cout<<"Please take out your card and insert it again!!!!"<<endl;
	cout<<"If you already done with your transaction bye bye, see you next time!!"<<endl;
	system("pause>0");
}