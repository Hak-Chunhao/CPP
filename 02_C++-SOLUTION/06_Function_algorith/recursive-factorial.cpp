#include<iostream>
using namespace std;
int main(){
	int n,sum,f;
	sum = 0;
	f = 1;
	cout<<"Enter your number: "; cin>>n;
//	cout<<"1 * 2 * 3 * 4 * 5 * ........ n"<<endl;
	for( int i = n; i>=2; i--){
		f*=i;
		sum+=f;		
		cout<<f<<"+";
	}
	cout<<"\b "<<endl;
	cout<<"Sum is: "<<sum<<endl;
}
