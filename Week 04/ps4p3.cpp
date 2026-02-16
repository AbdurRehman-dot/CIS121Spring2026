#include<iostream>
using namespace std;
int main()
{
	float number_of_books;
	cout << "Enter the total number of books you are ordering: ";
	cin >> number_of_books;
	float price_per_book;
	cout << "Enter the price per book: ";
	cin >> price_per_book;
	float total_price = (number_of_books * price_per_book);
	if (total_price >= 50)
	{
		float shipping_charges = 0.0;
		float final_price = total_price + shipping_charges;
		cout << "The total price of your order is $" << final_price << " with shipping charges $" << shipping_charges << endl;
	}
	else
	{
		float shipping_charges = 25.00;
		float final_price = total_price + shipping_charges;
		cout << "The total price of your order is $" << final_price << " with shipping charges $" << shipping_charges << endl;

	}
	return 0;
}