#include<iostream>
#include<string>
using namespace std;
int main()
{
	int numberoftrips = 0;
	string destination;
	double miles, gasoline, milespergallon;
	cout << "Enter your destination city, miles travelled and gallons of gasoline used (use ctrl+z to stop): ";
	while (cin >> destination >> miles >> gasoline)
	{
		milespergallon = miles / gasoline;
		cout << "Your destination city: " << destination << endl;
		cout << "Miles Travelled: " << miles <<endl;
		cout << "Gallons of Gasoline used per mile: " << milespergallon << endl;

		numberoftrips++;
		miles++;

	}
	cout << "Total number of trips; " <<numberoftrips << endl;
	cout << "Sum of miles: " << miles << endl;
	return 0;
}