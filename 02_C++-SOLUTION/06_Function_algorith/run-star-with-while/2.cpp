#include<iostream>
using namespace std;
int main() {
	int i = 1;
	while (i<=5) {
		int j = i;
		while(j >= 1) {
			cout<<"*";
			j--;
		}

		cout<<"\n";
		i++;
		
	}
	i = 1;
	while (i<=5) {
		int j = 4;
		while(j >= i) {
			cout<<"*";
			j--;
		}
		cout<<"\n";
		i++;
	}
}
