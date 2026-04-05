#include<iostream>
#include<string>
using namespace std;

void calculations(string lname, double credithours, double financialaid, double&tution, double&tutionowed)
{
	tution = credithours * 250;
	tutionowed = tution - financialaid;
}

int main()
{
	string lname;
	double credithours, financialaid, tution, tutionowed;
	double totaltution = 0.0;
	double numberofentries = 0.0;
	double averagetution = 0.0;
	cout << "Enter your last name, credithours and financialaid: ";
	while (cin >> lname >> credithours >> financialaid)
	{
		calculations(lname, credithours, financialaid,tution, tutionowed);
		cout << "The last name is: " << lname << endl;
		cout << "The tution is: " << tution << endl;
		cout << "The tution owed is: " << tutionowed << endl;

		numberofentries++;
		totaltution += tutionowed;

	}
	averagetution = totaltution / numberofentries;
	cout << "Number of entries: " << numberofentries << endl;
	cout << "The average tution is: " << averagetution << endl;
	return 0;








}