#include<iostream>
#include<string>
#include<iomanip>
#include<vector>
using namespace std;
struct student_information
{
	string fname;
	string lname;
	char District_code;
	double credit_hours;
	double tution_balance;
};

double compute_tution_balance(double credit_hours, char District_code)
{
	double tution_balance;
	if (District_code == 'I' || District_code == 'i')
	{
		tution_balance = credit_hours * 250.00;
	}
	else if (District_code == 'O' || District_code == 'o')
	{
		tution_balance = credit_hours * 500.00;
	}
	else
	{
		cout << "Invalid district code entered." << endl;
		tution_balance = 0.0;
	}
	return tution_balance;
}

void display_student_information(vector <student_information> mystudents)
{
	cout << "Displaying student information: " << endl;

	for (student_information n :mystudents)
	{
		cout << setprecision(2) << fixed;
		cout << "First Name: " << n.fname << endl;
		cout << "Last Name: " << n.lname << endl;
		cout << "District Code (I/O): " << n.District_code << endl;
		cout << "Credit Hours: " << n.credit_hours << endl;
		cout << "Tution Balance: $" << n.tution_balance << endl;
	}
}
int main()
{
	string fname, lname;
	char District_code;
	double credit_hours, tution_balance;
	int n = 0;
	vector <student_information> mystudents;
	while (!cin.eof())
	{
		cout << "Enter students first name: ";
		cin >> fname;
		if (cin.eof()) break;
		cout << "Enter students last name: ";
		cin >> lname;
		cout << "Enter students district code (I/O): ";
		cin >> District_code;
		cout << "Enter students credit hours: ";
		cin >> credit_hours;
		cout << "Student Tution Balance is: $" << compute_tution_balance(credit_hours, District_code) << endl;

		student_information temp;

		temp.fname = fname;
		temp.lname = lname;
		temp.District_code = District_code;
		temp.credit_hours = credit_hours;
		temp.tution_balance = compute_tution_balance(credit_hours, District_code);

		mystudents.push_back(temp);

	}
	display_student_information(mystudents);
	cout << "Total number of students: " << mystudents.size() << endl;

	return 0;
}