#include <iostream>
#include <string>
#include <string.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of students: ";
    cin >> n;
    char name[n][40];
    float score[n][5];
    char header[7][30] = {"No", "Name", "C", "C++", "Java", "Total", "Average"};
    for (int i = 0; i < n; i++)
    {
        fflush(stdin);
        cout << "Enter " << (i + 1) << " student name: ";
        gets(name[i]);
        cout << "Enter C score: ";
        cin >> score[i][0];
        cout << "Enter C++ score: ";
        cin >> score[i][1];
        cout << "Enter Java score: ";
        cin >> score[i][2];
        system("cls");
        score[i][3] = score[i][0] + score[i][1] + score[i][2];
        score[i][4] = score[i][3] / 3.0;
    };
    cout << "===============================" << endl;
    for (int i = 0; i < 7; i++)
    {
        cout << "\t" << header[i];
    };
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "\t" << (i + 1);
        cout << "\t" << name[i];
        for (int j = 0; j < 5; j++)
        {
            cout << "\t" << score[i][j];
        }
        cout << endl;
    }

    return 0;
}
