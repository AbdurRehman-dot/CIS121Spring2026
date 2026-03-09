#include<iostream>
#include<string	>
using namespace std;
int main()
{
	string lname;
	double numberofhits, numberofatbats;
	double battingaverage;
	double numberofplayers = 0;
	cout << "Enter last name, number of hits, and number of at-bats: ";
	while (cin >> lname >> numberofhits >> numberofatbats)
	{
		battingaverage = numberofhits / numberofatbats;
		cout << "last name: " << lname << endl;
		cout << "number of hits: " << numberofhits << endl;
		cout << "number of at-bats: " << numberofatbats << endl;
		cout << "batting average: " << battingaverage << endl;


		numberofplayers++;
	}
	cout << "number of players: " << numberofplayers << endl;
	return 0;
}