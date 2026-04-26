#include<iostream>
#include<string>
#include<fstream>
using namespace std;
void load_arrays(string fname[], string lname[], double gpa[])
{
	int i;
	ifstream infile;

	infile.open("Date_File_01.txt");

	for (i = 0; i <= 9; i++)
	{
		infile >> fname[i] >> lname[i] >> gpa[i];

	}
	infile.close();
}
void print_arrays(string fname[], string lname[], double gpa[])
{
	int i;
	for (i = 0; i <= 9; i++)
	{

		cout << fname[i] << " " << lname[i] << " " << gpa[i] << endl;

	}
}
void reverse_arrays(string fname[], string lname[], double gpa[])
{
	int i;
	for (i = 9; i >= 0; i--)
	{
		cout << fname[i] << " " << lname[i] << " " << gpa[i] << endl;
	}
}
int main()
{
	string fname[10], lname[10];
	double gpa[10];

	load_arrays(fname, lname, gpa);
	print_arrays(fname, lname, gpa);
	cout << "Reverse order of arrays: "	<< endl;
	reverse_arrays(fname, lname, gpa);

	return 0;
}