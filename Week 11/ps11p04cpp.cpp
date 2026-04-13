#include<iostream>
#include<string>
#include<iomanip>
#include<fstream>
using namespace std;
double calculations(double annualsalaey, double& biweeklysalary)
{
	biweeklysalary = annualsalaey / 26;
	return biweeklysalary;
}




int main()
{
	string lname;
	double annualslary, biweeklysalary;
	double totalannualsalary = 0;
	double numberofemployes = 0;
	double averageannualsalary = 0;
	ifstream infile;
	infile.open("data_file_04.txt");
	while (infile >> lname >> annualslary)
	{
		calculations(annualslary, biweeklysalary);
		cout << "Last name is " << lname << endl;
		cout << "Annual Salary is "	 << annualslary << endl;
		cout << "Biweekly Salary is " << biweeklysalary << endl;

		totalannualsalary += annualslary;
		numberofemployes++;
		averageannualsalary = totalannualsalary / numberofemployes;

	}
	cout << "Number of employees is " << numberofemployes << endl;
	cout << "Sum of annual salary is " << totalannualsalary << endl;
	cout << "Average annual salary is " << averageannualsalary << endl;
	infile.close();





}