#include<iostream>
using namespace std;
int main()
{
	int quantity;
	cout << "Enter the quantity of items: ";
	cin >> quantity;
	char status;
	cout << "Enter the status of the customer (A,B,C,D): ";
	cin >> status;
	int price = 0;
	int extended_price;
	float tax = 0.7;
	float tax_amount;
	switch (status)
	{
	case 'A':
		if (quantity > 10000)
		{
			price = 10;
		}
		else if (quantity < 5000)
		{
			price = 30;
		}
		tax_amount = price * 0.7;
		extended_price = price * quantity;
		cout << extended_price << " is the extended price and " << tax_amount << " is the tax amount and " << extended_price << " is the total." << endl;
		break;
	case 'B':
		if (quantity > 10000)
		{
			price = 12;
		}
		else if (quantity < 5000)
		{
			price = 30;
		}
		tax_amount = price * 0.7;
		extended_price = price * quantity;
		cout << extended_price << " is the extended price and " << tax_amount << " is the tax amount and " << extended_price << " is the total." << endl;
		break;
	case 'C':
		if (quantity > 5000 && quantity <= 10000)
		{
			price = 20;
		}
			else if (quantity < 5000)
		{
			price = 30;
		}
		tax_amount = price * 0.7;
		extended_price = price * quantity;
		cout << extended_price << " is the extended price and " << tax_amount << " is the tax amount and " << extended_price << " is the total." << endl;
		break;
	case 'D':
		if (quantity > 5000 && quantity <= 10000)
		{
			price = 22;
		}
				else if (quantity < 5000)
		{
			price = 30;
		}
		tax_amount = price * 0.7;
		extended_price = price * quantity;
		cout << extended_price << " is the extended price and " << tax_amount << " is the tax amount and " << extended_price << " is the total." << endl;
		break;
	default:
		if (quantity < 5000)
			price = 30;
		tax_amount = price * 0.7;
		extended_price = price * quantity;
		cout << extended_price << " is the extended price and " << tax_amount << " is the tax amount and " << extended_price << " is the total." << endl;



	}
	return 0;
}