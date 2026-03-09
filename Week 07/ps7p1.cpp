#include<iostream>
using namespace std;
int main()
{
	int quantity, price;
	double extendedprice, discount, discountedprice;
	double total = 0;
	cout << "Enter quantity and price (Press Ctrl+Z to end input): ";
	while (cin >> quantity >> price)
	{
		extendedprice = quantity * price;
		if (quantity > 1000)
		{
			discount = extendedprice * 0.1;

		}
		else
		{
			discount = 0;
		}
		discountedprice = extendedprice - discount;

		cout << "Quantity: " << quantity << endl;
		cout << "Price: " << price << endl;
		cout << "Extended Price: " << extendedprice << endl;
		cout << "Discount: " << discount << endl;
		cout << "Discounted Price: " << discountedprice << endl;

		total += discountedprice;
	}
	cout << "Total of all discounted prices: " << total << endl;
	return 0;

}