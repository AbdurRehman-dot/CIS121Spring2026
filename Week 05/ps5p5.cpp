#include<iostream>
using namespace std;
int main()
{
	float weight;
	cout << "Enter the weight: ";
	cin >> weight;
	if (weight > 100)
	{
		float rate = (weight * 0.50);
		cout << "The weight is " << weight << " and the rate is 0.50 ." << " The total given to the customer is " << rate << endl;
	}
	else if (weight >= 30 && weight <= 100)
	{
		float rate = (weight * 0.25);
		cout << "The weight is " << weight << " and the rate is 0.25 ." << " The total given to the customer is " << rate << endl;
	}
	else if (weight >= 20 && weight < 30)
	{
		float rate = (weight * 0.20);
		cout << "The weight is " << weight << " and the rate is 0.20 ." << " The total given to the customer is " << rate << endl;
	}
	else if (weight < 20)
	{
		float rate = (weight * 0.10);
		cout << "The weight is " << weight << " and the rate is 0.10 ." << " The total given to the customer is " << rate << endl;
	}
	else
	{
		cout << "Invalid input." << endl;
	}
	return 0;
	}