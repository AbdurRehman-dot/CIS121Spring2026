#include<iostream>
#include<string>
#include<fstream>
using namespace std;
void load_arrays(string cityname[], int population[])
{
	ifstream infile;
	infile.open("Data_File_02.txt");

	for (int i = 0; i < 8 ; i++)
	{
		infile >> cityname[i] >> population[i];
	}
	infile.close();
}
void print_arrays(string cityname[], int population[])
{
	for (int i = 0; i < 8; i++)
	{
		cout << cityname[i] << " " << population[i] << endl;
	}
}
void search_arrays(string cityname[], int population[], string scityname)
{
	int i;
	bool found_flag = false;
	found_flag = false;
	for (int i = 0; i < 8 && found_flag == false; i++)
	{
		if(scityname == cityname[i])
		{
			cout << cityname[i] << " " << population[i] << endl;
			found_flag = true;
		}
	}
	if (found_flag == false)
	{
		cout << scityname << " " << " not found" << endl;
	}
}

int main()
{
	string cityname[8];
	int population[8];
	string scityname;
	
	load_arrays(cityname, population);
	print_arrays(cityname, population);

	cout << "Enter the city name you want to search, press ctrl+z to stop: ";
	cin >> scityname;
	while (!cin.eof())
	{
		search_arrays(cityname, population, scityname);
		cout << "Enter the city name you want to search, press ctrl+z to stop: ";
		cin >> scityname;
	}
}