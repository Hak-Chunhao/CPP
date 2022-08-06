#include <iostream>
using namespace std;
double getMax(double num1, double num2, double num3)
{
    double result;
    if (num1 >= num2 && num1 >= num3)
    {
        result = num1;
    }
    else if (num2 >= num3)
    {
        result = num2;
    }
    else
    {
        result = num3;
    }
    return result;
}
int main(void)
{
    cout << getMax(1, 2, 3);
    return 0;
}
