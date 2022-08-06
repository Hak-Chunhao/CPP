#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    a = 20;
    b = 30;
    b = a;
    cout<<"Value A = "<<a<<endl;
    cout<<"value B = "<<b<<endl;
    cout<<"Address A = "<<&a<<endl;
    cout<<"Address B = "<<&b<<endl;

    return 0;
}

