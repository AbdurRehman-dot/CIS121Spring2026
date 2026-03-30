#include<iostream>
#include<string>
using namespace std;
double payrate(char jobcode)
{
	if (jobcode == 'L')
	{
		double rateofpay = 25;
		return rateofpay;
	}
	else if (jobcode == 'A')
	{
		double rateofpay = 30;
		return rateofpay;
	}
	else if (jobcode == 'J')
	{
		double rateofpay = 50;
		return rateofpay;
	}
}
double grosspayrate(char jobcode, double hoursworked)
{
	if (jobcode == 'L')
	{
		double rateofpay = hoursworked * 25;
		return rateofpay;
	}
	else if (jobcode == 'A')
	{
		double rateofpay = hoursworked * 30;
		return rateofpay;
	}
	else if (jobcode == 'J')
	{
		double rateofpay = hoursworked * 50;
		return rateofpay;
	}
}

int main()
{
	string lname;
	char jobcode;
	double hoursworked;
	double totalpay = 0;
	cout << "Enter employee's last name,job code (L,A,J) and no. of hours worked: ";
	while (cin >> lname >> jobcode >> hoursworked)
	{
		double rateofpay = payrate(jobcode);
		double grosspay = grosspayrate(jobcode, hoursworked);
		cout << "Employee's last name: " << lname << endl;
		cout << "Employee's gross pay: " << grosspay << endl;

		totalpay += grosspay;
	}
	cout << "The total grosspay is: " << totalpay << endl;
	return 0;
}