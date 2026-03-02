#include<iostream>
using namespace std;
int main()
{
	char code;
	cout << "Enter a Job code (L,J,A): ";
	cin >> code;
	int hours;
	cout << "Enter the number of hours worked: ";
	cin >> hours;
	float rate_of_pay = 0.0;
	float gross_pay;
	if (code == 'L')
	{
		if (hours > 40)
			rate_of_pay = 50.00;
		else
			rate_of_pay = 40.00;
	}
	else if (code == 'J')
	{
		if (hours > 60)
			rate_of_pay = 100.00;
		else
			rate_of_pay = 75.00;
	}
	else if (code == 'A')
	{
		if (hours > 40)
			rate_of_pay = 25.00;
		else
			rate_of_pay = 20.00;
	}
	gross_pay = hours * rate_of_pay;
	cout << "Gross Pay: $" << gross_pay << endl;
	return 0;
}