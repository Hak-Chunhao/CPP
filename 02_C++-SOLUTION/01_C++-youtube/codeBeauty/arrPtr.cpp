#include<iostream>
using namespace std;
int main() {
	int arr[] = { 1,2,3,4,5,6 };
	cout<< arr + 2<<endl;;
	cout<<&arr[2]<<endl;
	cout<<(&arr+2)<<endl;
	cout<<*(&arr+2)<<endl;
	char c[10] = "hello";
	cout<<*arr<<endl;
	cout<<arr + 0<<endl;
	cout<<&arr[0]<<endl;
	return 0;
}
