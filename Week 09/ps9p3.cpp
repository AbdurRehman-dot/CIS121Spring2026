#include<iostream>
#include<string>
using namespace std;

double milespergallon(double milestraveled, double gallonsused)
{
	double gallonspermile = milestraveled / gallonsused;
	return gallonspermile;
}
double costpergallon(double gallonsused)
{
	double gallonpercost = 3.50 * gallonsused;
	return gallonpercost;
}




int main()
{
	string destinationcity;
	double milestraveled;
	double gallonsused;
	double totalcost = 0;
	cout << "Enter the destination city, milestraveled and gallonsused: ";
	while (cin >> destinationcity >> milestraveled >> gallonsused)
	{
		double gallonspermile = milespergallon(milestraveled, gallonsused);
		double gallonpercost = costpergallon(gallonsused);
		cout << "The destination city is " << destinationcity << endl;
		cout << "The miles per gallon are " << gallonspermile << endl;
		cout << "The cost per gallon is " << gallonpercost << endl;

		totalcost += gallonpercost;

	}
	cout << "The total cost is " << totalcost << endl;
	return 0;
}
