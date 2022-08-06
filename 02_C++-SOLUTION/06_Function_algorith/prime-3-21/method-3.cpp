#include <iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main() {
	int n;
	int i,j;
	int c =1 ;
	bool isPrime = true;
	char quit;
// method 3, not yet understand need to learn
	do {
		system("cls");
		cout<<"Enter the number: ";
		cin>>n;
		if(n < 1) {
			cout<<"you can not input number 0 or below"<<endl;
		} else  {
			for(i =2; i<n-1; i++ ) {
				if(n%i!=0) {
					continue;
				} else {
					c=0;
				}
			}
		}
		if(c==0) {
			cout<<"is not prime number"<<endl;
		}		else if ( n == 1 ) {
			cout<<"1 is not considerd as prime number in math"<<endl;
		} else {
			cout<<"is prime number"<<endl;
		}
		cout<<"Do you want to quit the program <y = yes>"<<endl;
		cin>>quit;
		// getch() does not tell press any key, getch() = system("pause>0");
		system("pause");
	} while(quit != 'y' );
}
