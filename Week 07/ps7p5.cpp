#include<iostream>
#include<string>
using namespace std;
int main()
{
	string lname;
	double credithours;
	char districtcode;
	cout << "Enter your last name, number of credit hours, and district code (I,O): ";
	double tution = 0;
	double totaltution = 0;
	double numberofstudents = 0;
	double totalcredits = 0;
	while (cin >> lname >> credithours >> districtcode)
	{
		if (districtcode == 'I')
		{
			tution = 250 * credithours;
		}
		else if (districtcode == 'O')
		{
			tution = 550 * credithours;
		}
		cout << "Last name: " << lname << endl;
		cout << "Credit hours: " << credithours << endl;
		cout << "Tution owed this semester: " << tution << endl;

		totaltution += tution;
		totalcredits += credithours;
		numberofstudents++;
	}
	cout << "Total tution is: " << totaltution << endl;
	cout << "Total credit hours taken are: " << totalcredits << endl;
	cout << "Total number of students: " << numberofstudents << endl;
	return 0;


}