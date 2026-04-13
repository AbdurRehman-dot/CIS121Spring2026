#include<iostream>
#include<string>
#include<iomanip>
#include<fstream>
using namespace std;

void calculations(char studentcode,double credittaken ,double& costpercredithour, double& tutionowed, double& coursefee)
{
	if (studentcode == 'I')
	{
		costpercredithour = 250.00;
		tutionowed = credittaken * costpercredithour;
		coursefee = tutionowed * 0.10;
		
	}
	else if (studentcode == 'O')
	{
		costpercredithour = 500.00;
		tutionowed = credittaken * costpercredithour;
		coursefee = tutionowed * 0.10;
		
	}
	
}




int main()
{
	string lname;
	char studentcode;
	double creditstaken;
	double costpercredithour = 0;
	double tutionowed = 0;	
	double totaltutionowned = 0;
	double coursefee = 0;
	double numberofstudents = 0;
	double averagetutipncostperstudent = 0;
	ifstream infile;
	infile.open("data_file_05.txt");
	while (infile >> lname >> studentcode >> creditstaken)
	{
		calculations(studentcode, creditstaken, costpercredithour, tutionowed, coursefee);
		cout << "Last name is " << lname << endl;
		cout << "Student Code is " << studentcode << endl;
		cout << "Cost per credit hour is " << costpercredithour << endl;
		cout << "Credits taken are " << creditstaken << endl;
		cout << "Tution owed is " << tutionowed << endl;
		cout << "Course fee is " << coursefee << endl;

		numberofstudents++;
		totaltutionowned += tutionowed;
		averagetutipncostperstudent = totaltutionowned / numberofstudents;

	}
	cout << "The total number of students are " << numberofstudents << endl;
	cout << "The total tution owed is " << totaltutionowned << endl;
	cout << "The average tution cost per student is " << averagetutipncostperstudent << endl;
	infile.close();
}