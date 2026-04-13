#include<iostream>
#include<string>
#include<iomanip>
#include<fstream>
using namespace std;

void calculation(string automake, string model, double msrp, double salesprice, double&savings, double&salestax)
{
	savings = msrp - salesprice;
	salestax = salesprice * 0.07;
}



int main()
{
	string automake;
	string model;
	double msrp, salesprice;
	double savings;
	double salestax;
	double total_savings = 0;
	ifstream infile;
	infile.open("read_data_01.txt");
	while (infile >> automake >> model >> msrp >> salesprice)
	{
		calculation( automake, model, msrp, salesprice, savings, salestax);
		cout << automake << model << endl;
		cout << "MSRP is " << msrp << endl;
		cout << "Sales price is " <<salesprice << endl;
		cout << "You saved " << savings << endl;
		cout << "Sales tax is " << salestax << endl;

		total_savings += savings;
		cout << "Total savings: " << total_savings << endl;

	}
	infile.close();








}