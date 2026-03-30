#include<iostream>
#include<string>
using namespace std;

double costpercredithour(char districtcode)
{
	if (districtcode == 'I')
	{
		double cost = 250.0;
		return cost;
	}
	else if (districtcode == 'O')
	{
		double cost = 550.0;
		return cost;
	}
}
double tutionfee(double credithours, char districtcode)
{
	if (districtcode == 'I' || districtcode == 'i')
	{
		double cost = credithours * 250.0;
		return cost;
	}
	else if (districtcode == 'O' || districtcode == 'o')
	{
		double cost = credithours * 550.0;
		return cost;
	}
	else;
	cout << "Invalid district code. Please enter 'I' for in-state or 'O' for out-of-state." << endl;
}
int main()
{
	string lname;
	double credithours;
	char districtcode;
	double sumoftutionfee = 0;
	cout << "Enter your last name, credit hours and district code(I,O) ";
	while (cin >> lname >> credithours >> districtcode)
	{
		double cost = tutionfee(credithours, districtcode);
		cout << "Student " << lname << endl;
		cout <<	"has total tution fee of $" << cost << endl;

		sumoftutionfee += cost;
	}
	cout << "Total tution fee for all students is $" << sumoftutionfee << endl;









}