#include<iostream>
using namespace std;
int main()
{
	float annual_salary;
	cout << "Enter your annual salary: ";
	cin >> annual_salary;
	if (annual_salary > 100000)
	{
		float tax_rate = (annual_salary * 0.40);
		cout << "Your annual salary is  " << annual_salary << " and the tax rate is 40%." << "The total tax amount is " << tax_rate << endl;
	}
	else if (annual_salary >= 50000 && annual_salary <= 100000)
	{
		float tax_rate = (annual_salary * 0.35);
		cout << "Your annual salary is  " << annual_salary << " and the tax rate is 35%." << "The total tax amount is " << tax_rate << endl;
	}
	else if (annual_salary < 50000)
	{
		float tax_rate = (annual_salary * 0.25);
		cout << "Your annual salary is  " << annual_salary << " and the tax rate is 25%." << "The total tax amount is " << tax_rate << endl;
	}
	else
	{
		cout << "Invalid input. Please enter a valid annual salary." << endl;
	}
	return 0;
}
