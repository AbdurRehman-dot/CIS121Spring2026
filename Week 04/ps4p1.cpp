#include<iostream>
using namespace std;
int main()
{
	float quantity_of_item;
	cout << "Enter the quantity of item: ";
	cin >> quantity_of_item;
	if (quantity_of_item >= 1000)
	{
		float unit_price = 3.00;
		float extended_price = (quantity_of_item * unit_price);
		float tax = (extended_price * 0.07);
		float total = (extended_price + tax);
		cout << "The quantity is " << quantity_of_item <<" with the unit price of " << unit_price <<"." << "The extended price is "<< extended_price << " with tax " << tax << " and the total is " << total <<  endl;
	}
	else
	{
		float unit_price = 5.00;
		float extended_price = (quantity_of_item * unit_price);
		float tax = (extended_price * 0.07);
		float total = (extended_price + tax);
		cout << "The quantity is " << quantity_of_item << " with the unit price of " << unit_price << "." << "The extended price is " << extended_price << " with tax " << tax << " and the total is " << total << endl;
	}
	return 0;

}