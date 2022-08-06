#include <iostream>
#include <string>
#include <sstream>
#include <ctype.h>
using namespace std;
int main()
{
	//func-part-2
	string name;
	int n = 0;
	int nSum = 0;
	getline(cin, name);
	for (int i = 0; i < name.length(); i++)
	{
		//		cout<<name[i]<<endl;
		if (isspace(name[i]))
		{
			continue;
		}
		switch (name[i])
		{
			break;
		case 'a':
		case 'A':
		case 'j':
		case 'J':
		case 's':
		case 'S':
			n = 1;
			break;
		case 'b':
		case 'B':
		case 'k':
		case 'K':
		case 't':
		case 'T':
			n = 2;
			break;
		case 'c':
		case 'C':
		case 'l':
		case 'L':
		case 'u':
		case 'U':
			n = 3;
			break;
		case 'd':
		case 'D':
		case 'm':
		case 'M':
		case 'v':
		case 'V':
			n = 4;
			break;
		case 'e':
		case 'E':
		case 'n':
		case 'N':
		case 'w':
		case 'W':
			n = 5;
			break;
		case 'f':
		case 'F':
		case 'o':
		case 'O':
		case 'x':
		case 'X':
			n = 6;
			break;
		case 'g':
		case 'G':
		case 'p':
		case 'P':
		case 'y':
		case 'Y':
			n = 7;
			break;
		case 'h':
		case 'H':
		case 'q':
		case 'Q':
		case 'z':
		case 'Z':
			n = 8;
			break;
		case 'i':
		case 'I':
		case 'r':
		case 'R':
			n = 9;
			break;
		default:
			cout << "error";
			break;
		}

		cout << n;
		nSum += n;
	};
	int tmp = nSum;
	int sum_of_nSum_digit;
	while (tmp > 0)
	{
		int remainder;
		remainder = tmp % 10;
		sum_of_nSum_digit += remainder;
		tmp /= 10;
	};
	cout << endl;
	cout << name << " => " << nSum << " => " << sum_of_nSum_digit;
	return 0;
}
