#include<iostream>
using namespace std;
int main()
{
	char code;
	cout << "Enter a code: ";
	cin >> code;
	char day;
	cout << "Enter a day (H,F): ";
	cin >> day;
	float cost_of_rental = 0.0;
	if (code == 'A')
	{
		if (day == 'F')
		{
			cost_of_rental = 10.00;
		}
			if (day == 'H')
			{
				cost_of_rental = 15.00;
			}
		}
	else if (code == 'B')
	{
		if (day == 'F')
		{
			cost_of_rental = 20.00;
		}
		if (day == 'H')
		{
			cost_of_rental = 35.00;
		}
	}
	else if (code == 'C')
	{
		if (day == 'F')
		{
			cost_of_rental = 40.00;
		}
		if (day == 'H')
		{
			cost_of_rental = 45.00;
		}
	}
	else
	{
		cost_of_rental = 50.00;
	}
	cout << "Cost of rental: $" << cost_of_rental << endl;
	return 0;
}