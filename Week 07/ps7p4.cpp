#include<iostream>
#include<string>
using namespace std;
int main()
{
	string lname;
	char jobcode;
	int hours;
	cout << "Enter your last name, job code (L,A,J), and number of hours worked: ";
	int wage = 0;
	double pay = 0;
	double sum = 0;
	double entries = 0;
	while (cin >> lname >> jobcode >> hours)
	{
		if (jobcode == 'L')
		{
			wage = 25;
		}
		else if (jobcode == 'A')
		{
			wage = 30;
		}
		else if (jobcode == 'J')
		{
			wage = 50;
		}
		pay = hours * wage;
		cout << "Last name: " << lname << endl;
		cout << "Job Code: " << jobcode << endl;
		cout << "Number of hours worked: " << hours << endl;
		cout << "Pay for each employee: " << pay << endl;

		sum += pay;

		entries++;

	}
	cout << "Total entries :" << entries << endl;
	cout << "Total pay for all employees: " << sum << endl;

}