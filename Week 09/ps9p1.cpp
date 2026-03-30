#include<iostream>
using namespace std;

double totalCost(int quantity, int price)
{
	double total = quantity * price;
	return total;
}
double discount(double totalCost)
{
	if (totalCost > 100000.00)
	{
		double discountAmount = totalCost * 0.10;
		double discountedPrice = totalCost - discountAmount;
		return discountedPrice;
	}
	else if (totalCost <= 10000.00)
	{
		double discountAmount = totalCost * 0.05;
		double discountedPrice = totalCost - discountAmount;
		return discountedPrice;
	}
	else;
	cout << "No discount applied." << endl;

}

int main()
{
	int quantity;
	int price;
	double sumtotal = 0;
	double sumdiscounttotal = 0;
	cout << "Enter quantity and price of the items ";
	while (cin >> quantity >> price)
	{
		double total = totalCost(quantity, price);
		double discountAmount = discount(total);
		cout << "Total cost: " << total << endl;
		cout << "Discount amount: " << discountAmount << endl;	

		sumtotal += total;
		sumdiscounttotal += discountAmount;
		
	}
	cout << "Sum Total: " << sumtotal << endl;
	cout << "Sum Discount Total: " << sumdiscounttotal << endl;
	return 0;
}