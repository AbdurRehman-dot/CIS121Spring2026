#include<iostream>
#include<string>
#include<iomanip>
#include<fstream>
using namespace std;
double calculations(double quantity, double cost_per_item, double& extended_price)
{
	extended_price = quantity * cost_per_item;
	return extended_price;
}




int main()
{
	string itemname;
	double quantity;
	double cost_per_item;
	double extended_price = 0;
	double final_price = 0;
	double tax_amount = 0;
	ifstream infile;
	infile.open("data_file_02.txt");
	while (infile >> itemname >> quantity >> cost_per_item)
	{
		calculations(quantity, cost_per_item, extended_price);
		cout <<"Item name " << itemname << endl;
		cout <<"Quantity of the item " << quantity << endl;
		cout <<"Cost per item " << cost_per_item << endl;
		cout <<"Extended price " << extended_price << endl;

		final_price += extended_price;
		tax_amount = final_price * 0.07;

	}
	cout << "Tax Amount : " << tax_amount << endl;
	cout << "Final price " << final_price << endl;
	infile.close();
}