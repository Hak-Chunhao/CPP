#include <iostream>
#include <string>
using namespace std;
int main()
{
    int num[] = {10, 20, 30, 50, 40, 70, 60};
    int min = num[0], max = num[0];
    int len = sizeof(num) / sizeof(num[0]);
    for (int i = 0; i < len; i++)
    {
        /* code */
        if (num[i] < min)
        {
            min = num[i];
        }
        if (num[i] > max)
        {
            max = num[i];
        }
    }
    cout << "Minimum number is " << min << endl;
    cout << "Maximum number is " << max;

    return 0;
}