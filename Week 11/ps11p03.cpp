#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;
double calculations(double gallonsofgasused, double milestraveled, double& milespergallon, double& totalmiles, double& totalgallons)
{
	milespergallon = milestraveled / gallonsofgasused;
	return milespergallon;
}


int main()
{
	double gallonsofgasused;
	double milestraveled;
	double milespergallon = 0;
	double totalmiles = 0;
	double totalgallons = 0;
	ifstream infile;
	infile.open("data_file_03.txt");
	while (infile >> gallonsofgasused >> milestraveled)
	{
		calculations(gallonsofgasused, milestraveled, milespergallon, totalmiles, totalgallons);
		cout << "Number of gallons used " << gallonsofgasused << endl;
		cout << "Miles travelled " << milestraveled << endl;
		cout << "Miles per gallon " << milespergallon << endl;

		totalmiles += milestraveled;
		totalgallons += gallonsofgasused;
	}
	infile.close();
	cout << "Total miles traveled " << totalmiles << endl;
	cout << "Total gallons used " << totalgallons << endl;



}