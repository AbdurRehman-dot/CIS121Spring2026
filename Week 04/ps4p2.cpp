#include<iostream>
#include<string>
using namespace std;
int main()
{
	string item = "A";
	string item2 = "B";
	cout << "Select an item: ";
	cin >> item;
	int quantity;
	cout << "Enter quantity: ";
	cin >> quantity;
	if (item == "A")
	{
		float price = 10.00;
		float extended_price = (quantity * price);
		cout << "The item selected is " << item << " with unit price of " << price << " and extended price of " << extended_price << endl;
	}
	else
	{
		float price = 20.00;
		float extended_price = (quantity * price);
		cout << "The item selected is " << item << " with unit price of " << price << " and extended price of " << extended_price << endl;

	}

	return 0;
}