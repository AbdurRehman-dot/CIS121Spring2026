#include<iostream>
using namespace std;

void calculate_total(double quantity, double price, double& total, double& tax, double& totalorder)
{
	total = quantity * price;
	tax = total * 0.07;
	totalorder = total + tax;



}



int main()
{
	double quantity, price, total, tax, totalorder;
	cout << "Enter the quantity and price of the item: ";
	double sumtotal = 0.0;
	double sumtax = 0.0;
	double sumtotalorder = 0.0;
	while (cin >> quantity >> price)
	{
		calculate_total(quantity, price, total, tax, totalorder);
		cout << "Total: " << total << endl;
		cout << "Tax: " << tax << endl;
		cout << "Total order: " << totalorder << endl;

		sumtotal += total;
		sumtax += tax;
		sumtotalorder += totalorder;

	}
	cout << "Sum total: " << sumtotal << endl;
	cout << "Sum tax: " << sumtax << endl;
	cout << "Sum total order: " << sumtotalorder << endl;
	
	return 0;





}