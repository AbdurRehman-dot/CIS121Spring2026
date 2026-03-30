#include<iostream>
#include<string>
using namespace std;

double batttingaverage(double numberofhits, double atbat)
{
	double average = atbat / numberofhits;
	return average;
}
int main()
{
	double numberofplayers = 0;
	string lname;
	double numberofhits;
	double atbat;
	cout << "Enter players last name, number of hits, and number of at bats: ";
	while (cin >> lname >> numberofhits >> atbat)
	{
		double average = batttingaverage(numberofhits, atbat);
		cout << "Player: " << lname << endl;
		cout << "Batting Average: " << average << endl;

		numberofplayers++;

	}
	cout << "Number of players entered: " << numberofplayers;
	return 0;




}