#include <iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main() {
	int n;
	int i,j;
	int c = 0 ;
	bool isPrime = true;
	char quit;
// method 4,
	do {
		system("cls");
		cout<<"Enter the number: ";
		cin>>n;
		if(n < 1) {
			cout<<"you can not input number 0 or below"<<endl;
		}
		else  {
			for(i =2; i<=n; i++ ) { // if we want to let i = 1, c++ have to = 2
				if(n%i==0) {
					c++;
					break;
				}
			}
		}
		if(c==1) {
			cout<<"is prime number"<<endl;
		}else if ( n == 1 ){
			cout<<"1 is not considerd as prime number in math"<<endl;
		} 
		else {
			cout<<"is not prime number"<<endl;
		}
		cout<<"Do you want to quit the program <y = yes>"<<endl;
		cin>>quit;
		system("pause");
	} while(quit != 'y' );
}
