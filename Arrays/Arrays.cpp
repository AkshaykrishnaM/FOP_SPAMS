#include <iostream>
using namespace std;

const int NUM = 12;

int main()
{
	int values[NUM] = { 0 };
	int oddnumbers[NUM] = { 0 };
	int evenumbers[NUM] = { 0 };
	int odd = 0;  
	int even = 0;
	for (int i = 0; i < NUM; i++)
	{
		cout << "Enter a number: ";
		cin >> values[i];
		if (values[i] % 2 == 0)
		{
			evenumbers[even] = values[i];
			even++;
		}
		else
		{
			oddnumbers[odd] = values[i];
			odd++;
		}
	}
	cout << "Odd numbers: ";
	for (int i = 0; i < odd; i++)
	{
		cout << oddnumbers[i] << " ";
	}
	cout << "\neven numbers: ";
	for (int i = 0; i < even; i++)
	{
		cout << evenumbers[i] << " ";
	}
	cout << endl;
	return 0;

}