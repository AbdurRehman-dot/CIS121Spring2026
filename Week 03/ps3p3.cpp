#include<iostream>
using namespace std;
int main() {
	float Total_price_for_meal;
	cout << "Enter the total price for the meal: ";
	cin >> Total_price_for_meal;
	float Tip = (Total_price_for_meal * 0.15);
	float Total = Total_price_for_meal + Tip;
	cout << "The total price of the meal is $ " << Total_price_for_meal << " and the tip is $ " << Tip << "." << " Total price for meal with tip is $ " << Total << endl;
	return 0;


}