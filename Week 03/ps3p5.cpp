#include<iostream>
using namespace std;
int main()
{
	float fixed_cost;
	cout << "Enter fixed cost: ";
	cin >> fixed_cost;
	float price_per_unit;
	cout << "Enter price per unit: ";
	cin >> price_per_unit;
	float cost_per_unit;
	cout << "Enter cost per unit: ";
	cin >> cost_per_unit;
	float break_even_point = fixed_cost / (price_per_unit - cost_per_unit);
	cout << "Break-even point: " << break_even_point << endl;
	return 0;
}