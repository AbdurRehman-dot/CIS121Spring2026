#include<iostream>
#include<string>
using namespace std;
int main()
{
	string name;
	cout << "Enter your name: ";
	cin >> name;
	float price;
	cout << "Enter the price of the item: ";
	cin >> price;
	if (price >= 1000)
	{
		float warrantee = price * 0.1;
		float total = price + warrantee;
		cout << "The name of the buyer is " << name << " and the cost of the appliance is " << price << " and the warrantee cost is " << warrantee << " and the total cost is " << total << endl;
	}
	else
	{
		float warrantee = price * 0.5;
		float total = price + warrantee;
		cout << "The name of the buyer is " << name << " and the cost of the appliance is " << price << " and the warrantee cost is " << warrantee << " and the total cost is " << total << endl;
	}
	return 0;






}