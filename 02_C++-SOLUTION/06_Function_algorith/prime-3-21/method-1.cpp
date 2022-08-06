#include <iostream>
#include<conio.h>
#include<stdlib.h>
//#include<climits>
using namespace std;
int main() {
	int n;
	int i,j;
	bool isPrime = true;
	char quit;
	// method 1 display all the number until n
	do {
		system("cls");
		cout<<"Enter the number: ";
		cin>>n;
		if(n<=0) {
			cout<<"you can not input number 0 or below"<<endl;
		}else if(n==1){
			cout<<"1 is not considerd as prime number in math"<<endl;// or we can use i = 1 if we dont want to use if condition
		} 
		else {
			for( i =2; i<=n; i++ ) {
				for(j=2; j<=i; j++) {

					if(i%j==0) {
						break;
					}
				}
				if(i==j) {
					//cout<<"1 is not considered as prime number"<<endl; error because it always shows this before number considered as prime
					cout<<i<<"\tis prime number"<<endl;// can not display n and j value
				} else {
					cout<<i<<"\tis composite number"<<endl;

				}
			}
		}
		cout<<"Do you want to quit the program <y = yes>"<<endl;
		cin>>quit;
		system("pause");// getch does not tell press any key, getch() = system("pause>0");
	} while(quit != 'y' );
} // int main





