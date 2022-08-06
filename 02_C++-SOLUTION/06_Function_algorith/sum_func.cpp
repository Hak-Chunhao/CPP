#include <iostream>
using namespace std;
// return value function
double sum(float number1,float number2){
	return number1 + number2;
}
int main(){
	float num1,num2,result;
	cout<<"Enter the first number: ";cin>>num1;
	cout<<"Enter the second number: ";cin>>num2;
	result = sum(num1,num2);
	cout<<result<<endl;	
	return 0;
}
