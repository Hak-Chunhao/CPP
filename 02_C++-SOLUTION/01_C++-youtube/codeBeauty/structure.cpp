#include <iostream>
using namespace std;
struct SMARTPHONE
{
    string name;
    int storageSpace;
    string color;
    float price;
};
struct PERSON
{
    string name;
    int age;
    SMARTPHONE smartPhone;
};
void printSmartPhoneInfo(SMARTPHONE smartPhone)
{
    cout << "name: " << smartPhone.name << endl;
    cout << "storageSpace: " << smartPhone.storageSpace << endl;
    cout << "color: " << smartPhone.color << endl;
    cout << "price: " << smartPhone.price << endl;
}
void printPersonInfo(PERSON person)
{
    cout << "name: " << person.name << endl;
    cout << "age: " << person.age << endl;
    printSmartPhoneInfo(person.smartPhone);
}
int main()
{
    SMARTPHONE smartPhone1;
    smartPhone1.name = "Iphone";
    smartPhone1.storageSpace = 32;
    smartPhone1.color = "black";
    smartPhone1.price = 1000;
    SMARTPHONE smartPhone2;
    smartPhone2.name = "Sumsung";
    smartPhone2.storageSpace = 64;
    smartPhone2.color = "gray";
    smartPhone2.price = 888.88;
    // printSmartPhoneInfo(smartPhone1);
    // printSmartPhoneInfo(smartPhone2);
    PERSON p;
    p.name = "hao";
    p.age = 22;
    p.smartPhone = smartPhone1;
    printPersonInfo(p);
    return 0;
}
