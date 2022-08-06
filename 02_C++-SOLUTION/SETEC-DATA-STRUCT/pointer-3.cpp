#include<iostream>
using namespace std;
int main(){
    int *p;
    cout<<"Address p = "<<p<<endl;
    int a = 9;
    p = &a;
    cout<<"Address a = "<<&a<<endl;
    cout<<"Address p = "<<p<<endl;
    int b = 20;
    p = &b;
    cout<<"Address b = "<<&b<<endl;
    cout<<"Address p = "<<p<<endl;
    
    return 0;
}