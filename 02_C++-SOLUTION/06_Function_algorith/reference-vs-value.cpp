#include<iostream>
using namespace std;
void swapByValue(int m, int n);
void swapByreference(int &m, int &n);
int main() {
	int a = 1;
	int b = 2;
	cout<<"Before calling function swap a = "<<a<<" , b = "<<b<<endl;
	swapByValue(a,b);
	cout<<"Before calling function swap a = "<<a<<" , b = "<<b<<endl;
	return 0;
}
void swapByValue(int m, int n){
	cout<<"Before swap m = "<<m<<", n= "<<n<<endl;
	int tmp = m;
	m = n;
	n = tmp;
	cout<<"After swap m = "<<m<<", n= "<<n<<endl;
}
void swapByreference(int &m, int &n){
	cout<<"Before swap m = "<<m<<", n= "<<n<<endl;
	int tmp = m;
	m = n;
	n = tmp;
	cout<<"After swap m = "<<m<<", n= "<<n<<endl;
}
