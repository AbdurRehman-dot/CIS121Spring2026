#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
double total(double miles, double gallons)
{
	double sum = miles / gallons;
	return sum;

};



int main()
{
	int number_of_trips = 0;
	string destination;
	double miles, gallons;
	cout << "Enter the destination, miles traveled and gallons of fuel used (use ctrl+z to stop): ";
	while (cin >> destination >> miles >> gallons)
	{
		double sum = total(miles, gallons);
		cout << "Your Destination is " << destination << endl;
		cout << "The sum of miles and gallons is " << sum << endl;


		number_of_trips++;
		miles++;
	}
	cout << "Total number of trips; " << number_of_trips << endl;
	cout << "Sum of miles: " << miles << endl;
	return 0;
}
