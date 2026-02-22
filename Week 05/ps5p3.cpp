#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main()
{
	string lname;
	cout << "Enter your last name: ";
	cin >> lname;
	float hours;
	cout << "Enter the number of hours worked: ";
	cin >> hours;
	char job_code;
	cout << "Enter your job code (E/J/A): ";
	cin >> job_code;
	job_code = toupper(job_code);
	if (job_code == 'E')
	{
		float pay_rate = (hours * 25.00);
		cout << lname << " has worked a total of " << hours << " hours with a pay rate of $25.00 ." << " The total is " << pay_rate << endl;
	}
	else if (job_code == 'J')
	{
		float pay_rate = (hours * 20.00);
		cout << lname << " has worked a total of " << hours << " hours with a pay rate of $20.00 ." << " The total is " << pay_rate << endl;
	}
	else if (job_code == 'A')
	{
		float pay_rate = (hours * 15.00);
		cout << lname << " has worked a total of " << hours << " hours with a pay rate of $15.00 ." << " The total is " << pay_rate << endl;

	}
	else
	{
		cout << "Invalid job code entered. Please enter E, J, or A." << endl;
	}
	return 0;


}