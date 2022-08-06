#include<iostream>
using namespace std;
double balance1;
int main(){
	cout<<"\t\t||ABA Bank ATM Machine||"<<endl;
	cout<<"\t\t ============================="<<endl;
	cout<<"\t\t =============================\n\n"<<endl;
	int password;
	int pincode;

	cout<<"Please Enter the Pincode: ";
	cin>>pincode;
	if(pincode == 1234)
	{
		cout<<"Welcome to ABA \n";
		for(int i = 0;i<3;i++){
			cout<<"Enter your password: ";cin>>password;
			double balance = 100000;
			balance1 = balance;
			if(password == 7777){
				for(int x=1; x<10; x++){
					double withdraw, deposit;
					int choice;
					cout<<endl;
					if(x == 1){
						cout<<"\t\t ATM"<<endl;
						cout<<"Choose a Transaction\n\n";
					}
					cout<<"MAIN SCREEN \n";
					cout<<"[1] Inquire Balance"<<endl;
					cout<<"[2] Withdraw"<<endl;
					cout<<"[3] Deposit"<<endl;
					cout<<"[4] Quit"<<endl;
					cout<<"Enter Option: ";
					cin>>choice;
					switch(choice){
						case 1:
							cout<<"Balance Inquiry"<<endl;
							cout<<"Your current Balance is "<<balance1<<endl;
							continue;
							case 2:
								cout<<"Withdraw"<<endl;
								cout<<"Enter Amount in Dollars: ";
								cin>>withdraw;
								balance1 -= withdraw;
								cout<<"You withdraw: "<<withdraw<<endl;
								cout<<"You remaining balance is: "<<balance1<<endl;
								continue;
								case 3:
									cout<<"Deposit"<<endl;
									cout<<"Enter amount in dollars";
									cin>>deposit;
									balance1 += deposit;
									cout<<"You deposit: "<<deposit<<endl;
									cout<<"Your new balance is: "<<balance1<<endl;
									continue;
									case 4:
										cout<<"Exit Mode"<<endl;
										system("cls");
										break;
										default:
											cout<<"Invalid option"<<endl;
											continue;
																												
					}
					break;
				}
				break;
			}
			else if(i == 2){
				cout<<"Card is captured"<<endl;
			}
			else{
				cout<<"Pls try again"<<endl;
			}
		}
		
	}



}
