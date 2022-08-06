#include <iostream>
using namespace std;
int main()
{
	float score[8];
	//	get the score from user input
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter your score: ";
		cin >> score[i];
		score[6] += score[i];
	}
	//	print the score one by one
	cout << "======================================" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "Score " << i << " : " << score[i] << endl;
		score[7] = score[6] / 5;
	}
	//	Show the total score and average
	cout << "======================================" << endl;
	cout << "Your total score is: " << score[6] << endl;
	cout << "Your average is: " << score[7] << endl;
	//	check average condition
	if (score[7] < 50)
	{
		cout << ("Your average is F") << endl;
	}
	else if (score[7] < 60)
	{
		cout << ("Your average is E") << endl;
	}
	else if (score[7] < 70)
	{
		cout << ("Your average is D") << endl;
	}
	else if (score[7] < 80)
	{
		cout << ("Your average is C") << endl;
	}
	else if (score[7] < 90)
	{
		cout << ("Your average is B") << endl;
	}
	else if (score[7] <= 100)
	{
		cout << ("Your average is A") << endl;
	}
	else
	{
		cout << "Error 404" << endl;
	}

	return 0;
}
