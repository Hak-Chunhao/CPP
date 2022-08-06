#include <iostream>
#include <string>
using namespace std;
int main()
{
    string word;
    int c = 0;
    cout << "Enter the string: ";
    getline(cin, word);
    int len = word.length();
    for (int i = 0; i < len; i++)
    {
        if (word[i] == ' ' || word[i + 1] == '\0')
        {
            /* code */
            c++;
        }
    }
    // output
    cout << "\ntotal number of words = " << c << endl;

    return 0;
}