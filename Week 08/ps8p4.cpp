#include<iostream>
#include<string>
using namespace std;
int unitprice(int quantity, char product_code)
{
	int price = quantity * product_code;
	return price;
}
int shipping(int unitprice, int shipping_cost)
{
	int ship = unitprice + shipping_cost;
	return ship;
}


int main()
{
	int customer = 0;
	char product_code;
	int quantity;
	cout << "Enter the product code and quantity (W,C,G)(Press ctrl+z to stop): ";
	int total_price = 0;
	int shipping_cost = 0;
	int total = 0;
	int extended_price = 0;
	while (cin >> product_code >> quantity)
	{
		if (product_code == 'W' || product_code == 'w')
		{
			int price = unitprice(quantity, 10);
			int ship = shipping(price, 2);
			extended_price = quantity * price;
			cout << "The product code is  " << product_code << " and the unit price is " << price << " . The shipping cost is " << ship << " and the extended price is " << extended_price << endl;

		}
		else if (product_code == 'C' || product_code == 'c')
		{
			int price = unitprice(quantity, 15);
			int ship = shipping(price, 5);
			extended_price = quantity * price;
			cout << "The product code is  " << product_code << " and the unit price is " << price << " . The shipping cost is " << ship << " and the extended price is " << extended_price << endl;
		}
		else if (product_code == 'G' || product_code == 'g')
		{
			int price = unitprice(quantity, 20);
			int ship = shipping(price, 7);
			extended_price = quantity * price;
			cout << "The product code is  " << product_code << " and the unit price is " << price << " . The shipping cost is " << ship << " and the extended price is " << extended_price << endl;
		}
		customer++;

	}
	cout << "The total number of customers is " << customer << endl;
	return 0;

}