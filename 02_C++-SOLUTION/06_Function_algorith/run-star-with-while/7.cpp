#include<iostream>
using namespace std;
int main() {
//	use do while
	int i = 1;
	do {
		int j = i;
		do {
			cout<<"*";
			j--;
		} while(j >=1 );

		cout<<"\n";
		i++;
	} while (i<=5);

}
