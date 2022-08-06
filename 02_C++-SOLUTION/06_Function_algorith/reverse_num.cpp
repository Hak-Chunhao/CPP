#include <iostream>
using namespace std;
int main()
{
    /*

    */
    int number, remainder, revNumber = 0;
    cout << "Enter the number: ";
    cin >> number;
    while (number > 0)
    {
        /* code */
        remainder = number % 10;
        // cout << remainder;
        number = number / 10;
        revNumber = (revNumber * 10) + remainder;
    }
    cout << "Reverse number is  " << revNumber;
    return 0;
}