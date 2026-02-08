#include<iostream>
using namespace std;
int main()
{
	float purchase_price;
	cout << "Enter the purchase price of the stock: ";
	cin >> purchase_price;
	float current_price;
	cout << "Enter the current price of the stock: ";
	cin >> current_price;
	float percentage = (current_price - purchase_price) / purchase_price * 100;
	if (current_price > purchase_price) {

		cout << "The stock has increased by " << percentage << "%." << endl;
	}
	else if (current_price < purchase_price) {
		cout << "The stock has decreased by " << -percentage << "%." << endl;
	}
	else {
		cout << "The stock price has not changed." << endl;
	}
	return 0;


}