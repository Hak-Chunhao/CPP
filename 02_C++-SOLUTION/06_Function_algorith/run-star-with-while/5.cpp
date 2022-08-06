#include<iostream>
using namespace std;
int main() {
	int i;
	i = 1;
	while (i<=5) {
		int j = 5;
		while(j >= i) {
			cout<<"*";
			j--;
		}
		cout<<"\n";
		i++;
	} 
	i = 2;
	while (i<=5) {
		int j = i;
		while(j >= 1) {
			cout<<"*";
			j--;
		}

		cout<<"\n";
		i++;
		
	}
	
}
