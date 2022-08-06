#include<iostream>
using namespace std;
int main(){
    int *p;
    cout<<"Address p = "<<p<<endl;
    int a = 9;
    p = &a;
    cout<<"Address a = "<<&a<<endl;
    cout<<"Value a = "<<a<<endl;
    a = 20;
    cout<<"Address a = "<<&a<<endl;
    cout<<"Value a = "<<a<<endl;
    cout<<"Address p = "<<p<<endl;
    cout<<"Value p = "<<*p<<endl;
   
    return 0;
}