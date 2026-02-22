#include<iostream>
using namespace std;
int main()
{
	float quantity;
	cout << "Enter the quantity of apples in lbs ";
	cin >> quantity;
	if (quantity > 100)
	{
		float price = (quantity * 0.10);
		cout << "The Price per pound is $0.10 and the total is $ " << price << endl;

	}
	else if (quantity >= 50 && quantity <= 100)
	{
		float price = (quantity * 0.25);
		cout << "The Price per pound is $0.25 and the total is $ " << price << endl;
	}
	else if (quantity < 50)
	{
		float price = (quantity * 0.50);
		cout << "The Price per pound is $0.50 and the total is $ " << price << endl;
	}
	else
	{
		cout << "Invalid quantity" << endl;
	}
	return 0;

}