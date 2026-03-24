#include<iostream>
#include<string>
using namespace std;

double total_tution(double credits_taken, double cost_per_credit = 250)
{
	double sum = credits_taken * 250;
	return sum;
}
int main()
{

	string lname;
	double credits_taken;
	cout << "Enter your last name and credit hours taken (press ctrl+z to stop): ";
	double total = 0;
	double no_of_students = 0;
	while (cin >> lname >> credits_taken)
	{
		double sum = total_tution(credits_taken);
		cout << "The total tution for " << lname << " is $ " << sum << endl;

		no_of_students++;
		total += total_tution(credits_taken);
	}
	cout << "The total number fo students are " << no_of_students << endl;
	cout << "The total tution for all students is $ " << total << endl;
	return 0;
	
}