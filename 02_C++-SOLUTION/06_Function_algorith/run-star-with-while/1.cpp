#include<iostream>
using namespace std;
int main() {
	int i,n; 
	i = 1;
	cin>>n;
	while (i<=n) {
		int j = i;
		while(j >= 1) {
			cout<<"*";
			j--;
		}

		cout<<"\n";
		i++;
		
	}
	i = 1;
	while (i<=n) {
		int j = n - 1;
		while(j >= i) {
			cout<<"*";
			j--;
		}
		cout<<"\n";
		i++;
	}
}
