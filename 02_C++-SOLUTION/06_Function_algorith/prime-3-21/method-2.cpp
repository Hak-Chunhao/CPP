#include <iostream>
#include<conio.h>
#include<stdlib.h>
#include<climits>
using namespace std;
int main() {
	int n;
	int i,j;
	bool isPrime = true;
	char quit;
// method 2
	do {
		system("cls");
		cout<<"Enter the number: ";
		cin>>n;
		if(n<=0) {
			cout<<"you can not input number 0 or below"<<endl;
		} else {
			for( i =2; i<=n/2; i++ ) {//for( i =2; i<n; i++ )
				if(n%i==0) {
					isPrime = false;
					break;
				}
			}
		}
		if(n==1) {
			cout<<"1 is not considered as prime number"<<endl;
		} else if(isPrime) {
			cout<<n<<" is prime number"<<endl;// can not display n and j value
		} else {
			cout<<n<<" is not prime number"<<endl;
		}
		cout<<"Do you want to quit the program <y = yes>"<<endl;
		cin>>quit;
		// getch does not tell press any key, getch() = system("pause>0");
		system("pause");
	} while(quit != 'y' );

}// int main
