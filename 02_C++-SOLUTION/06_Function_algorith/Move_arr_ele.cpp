#include<iostream>
using namespace std;
int main() {
	int n;
	cout<<"Enter the element of the array: ";
	cin>>n;
	int arr[n];
	for(int i = 0; i < n; i++) {
		cout<<"Enter the "<<i<<" number: ";
		cin>>arr[i];
	}
	for(int i = 0; i < n; i++){
	arr[i]= arr[i+1]; // this operator exceed one value, that's why when we want to show value, we have to n - 1 like below 
	 }
	 cout<<"List all Array"<<endl;	
	for(int i = 0; i < n-1; i++) {
		cout<<"a["<<i<<"] = "<<arr[i]<<endl;

	}
	return 0;
}
