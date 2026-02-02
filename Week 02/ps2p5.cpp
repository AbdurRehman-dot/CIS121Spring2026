#include<iostream> // Included to access library
using namespace std;
int main() {
	int original_price;
	cout << "Enter the original price ";
	cin >> original_price;
	float discount_percentage;
	cout << "Enter the discount percentage ";
	cin >> discount_percentage;
	float Total_discount = (original_price * discount_percentage);
	float Discounted_price = (original_price - Total_discount);
	cout << "Discount amount: $" << Total_discount << endl;
	cout << "Price after discount: $" << Discounted_price << endl;
	return 0;

}