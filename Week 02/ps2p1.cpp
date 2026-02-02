#include<iostream> // included iostream to access library functions
using namespace std;
int main() {
	int quantity;
	int unit_price;
	cout << "Enter the quantity and unit price: ";
	cin >> quantity >> unit_price;
	int extended_price = (quantity * unit_price);
	cout << "The extended price is: " << extended_price << endl;
	return 0;
}