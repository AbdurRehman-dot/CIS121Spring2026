#include<iostream>
using namespace std;
int main()
{
	int tickets;
	cout << " Enter the number of tickets: ";
	cin >> tickets;
	char code;
	cout << " Enter the location code (H,L): ";
	cin >> code;
	float price_per_ticket = 0.0;
	float total_cost;
	if (tickets > 25 || code == 'H')
	{
		price_per_ticket = 30.00;
	}
	else if (tickets > 10 && tickets <=24)
	{
		price_per_ticket = 40.00;
	}
	else if (code == 'L')
	{
		price_per_ticket = 40.00;
	}
	else
	{
		price_per_ticket = 50.00;
	}
	total_cost = price_per_ticket * tickets;
	cout << "You bought " << tickets << " tickets and the price per ticket is $ " << price_per_ticket << " and the  total cost is " << total_cost << endl;
	return 0;
}