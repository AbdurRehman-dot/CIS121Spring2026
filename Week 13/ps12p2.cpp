#include<iostream>
#include<string>
#include<iomanip>
#include<vector>
using namespace std;
struct employee_data
{
	string fname, lname;
	double hours, rate;
	double gross_pay;
};
double calculate_gross_pay(double hours, double rate)
{
	double gross_pay;
	if (hours > 40)
	{
		gross_pay = (40 * rate) + ((hours - 40) * (rate * 1.5));
	}
	else
	{
		gross_pay = hours * rate;
	}
	return gross_pay;
}
void display_employee_data(vector<employee_data> mydata)
{
	cout << "Display Employee Data " << endl;

	for (employee_data n : mydata)
	{
		cout << setprecision(2) << fixed;
		cout << "Employee First Name: " << n.fname << endl;
		cout << "Employee Last Name: " << n.lname << endl;
		cout << "Employee Hours Worked: " << n.hours << endl;
		cout << "Employee Hourly Rate: " << n.rate << endl;
		cout << "Employee Gross Pay: " << n.gross_pay << endl;
	}
}
int main()
{
	string fname, lname;
	double hours, rate;
	double gross_pay;
	int n = 0;
	vector<employee_data> mydata;
	while (!cin.eof())
	{
		cout << "Enter Employee First Name: ";
		cin >> fname;
		cout << "Enter Employee Last Name: ";
		cin >> lname;
		cout << "Enter Employee Hours Worked: ";
		cin >> hours;
		cout << "Enter Employee Hourly Rate: ";
		cin >> rate;
		gross_pay = calculate_gross_pay(hours, rate);
		mydata.push_back(employee_data());
		mydata[n].fname = fname;
		mydata[n].lname = lname;
		mydata[n].hours = hours;
		mydata[n].rate = rate;
		mydata[n].gross_pay = gross_pay;
		n = n + 1;
	}
	cout << "Display Vector of Employee Data " << endl;
	display_employee_data(mydata);
	return 0;
}
	