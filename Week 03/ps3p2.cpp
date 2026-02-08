#include<iostream>
using namespace std;
int main()
{
	int current_stock_price;
	cout << "Enter current stock price: $ ";
	cin >> current_stock_price;
	int quantity_of_stock;
	cout << "Enter quantity of stock: ";
	cin >> quantity_of_stock;
	int total_stock_value = current_stock_price * quantity_of_stock;
	cout << "Total stock value is: " << total_stock_value << endl;
	return 0;



}