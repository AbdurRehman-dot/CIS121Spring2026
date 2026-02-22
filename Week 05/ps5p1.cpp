#include<iostream>
#include<string>
using namespace std;
int main()
{
	string lname;
	cout << "Enter the last name of the student: ";
	cin >> lname;
	int score;
	cout << "Enter the score of the student: ";
	cin >> score;
	if (score >= 90)
	{
			cout << "Student " << lname << " has an A grade.";
		
	}
	else if (score >= 80 && score <= 89)
	{
		cout << "Student " << lname << " has a B grade.";

	}
	else if (score >= 70 && score <= 79)
	{
		cout << "Student " << lname << " has a C grade.";
	}
	else if (score >= 60 && score <= 69)
	{
		cout << "Student " << lname << " has a D grade.";
	}
	else if (score < 60)
	{
		cout << "Student " << lname << " has an F grade.";
	}
	else
	{
		cout << "Invalid score entered.";
	}
	return 0;


}