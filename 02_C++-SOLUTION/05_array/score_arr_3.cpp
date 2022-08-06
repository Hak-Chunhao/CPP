#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	// ask user how many arrays they want to have
	int n;
	cout << "Enter the element: ";
	cin >> n;
	double arr[n], sum = 0, max, min, equal, temp;
	cout << fixed << setprecision(2);
	//	get user input array value, and sum the value
	for (int i = 0; i < n; i++)
	{
		cout << "Enter your " << i << " array number: ";
		cin >> arr[i];
		sum += arr[i];
	}
	//	display array value one by one, and display the sum value
	cout << "=====================================================" << endl;
	int i = 0;
	while (i < n)
	{
		cout << "Your " << i << " score is: " << arr[i] << endl;
		i++;
	}
	cout << "=====================================================" << endl;
	cout << "Your total sum is: " << sum << endl;

	// Find max and min
	cout << "==================== Max and Min ====================" << endl;

	max = arr[0];
	min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	for (int i = 1; i < n; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
	}
	// try to find equal solution ?
	cout << "Maximum is: " << max << endl;
	cout << "Minimum is: " << min << endl;
	//cout<<"Equal is: "<<equal<<endl;

	// Sort array
	cout << "==================== Array asc ====================" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] >= arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	for (i = 0; i < n; i++)
	{
		cout << "value of array"
			 << "[" << i << "] = " << arr[i] << endl;
	}
	cout << "==================== Array dec ====================" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] <= arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		cout << "value of array"
			 << "[" << i << "] = " << arr[i] << endl;
	}
	//
	cout << "=============" << endl;
	system("pause");
}
