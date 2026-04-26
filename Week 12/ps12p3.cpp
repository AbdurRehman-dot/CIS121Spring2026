#include<iostream>
#include<string>
#include<fstream>
using namespace std;

void load_array(string fname[], string lname[], double salary[])
{
	ifstream infile;
	infile.open("Data_File_03.txt");
	for (int i = 0; i < 10; i++)
	{
		infile >> fname[i] >> lname[i] >> salary[i];
	}
	infile.close();
}
void print_array(string fname[], string lname[], double salary[])
{

	for (int i = 0; i < 10; i++)
	{
		cout << fname[i] << " " << lname[i] << " " << salary[i] << endl;
	}
}
void search_array(string fname[], string lname[], double salary[], string slname)
{
	int i;
	bool found_flag = false;
	found_flag = false;
	for (int i = 0; i < 10 && found_flag == false; i++)
	{
		if (slname == lname[i])
		{
			cout << fname[i] << " " << lname[i] <<  " " << salary[i] << endl;
			found_flag = true;
		}
	}
	if (found_flag == false)
	{
		cout << slname << " " << " not found" << endl;
	}
}
int main()
{
	string lname[10], fname[10];
	double salary[10];
	string slname;

	load_array(fname, lname, salary);
	print_array(fname, lname, salary);
	cout << "Enter last name to search, press ctrl+z to stop: ";
	cin >> slname;
	while (!cin.eof())
	{
		search_array(fname, lname, salary, slname);
		cout << "Enter last name to search, press ctrl+z to stop: ";
		cin >> slname;
	}
}