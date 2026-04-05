#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

void calculations(double amount_to_invest, double intrest_rate_at_5_years, double intrest_rate_at_10_years,double&five_years_amount, double&ten_years_amount)
{
	five_years_amount = amount_to_invest * pow((1 + intrest_rate_at_5_years ), 5);
	ten_years_amount = amount_to_invest * pow((1 + intrest_rate_at_10_years), 10);
}

int main()
{
	double amount_to_invest, intrest_rate_at_5_years, intrest_rate_at_10_years;
	double five_years_amount;
	double ten_years_amount;
	cout << "Enter the amount to invest and interest rate at 5 and 10 years: ";
	cout << setprecision(2) << fixed;
	while (cin >> amount_to_invest >> intrest_rate_at_5_years >> intrest_rate_at_10_years)
	{
		calculations(amount_to_invest, intrest_rate_at_5_years, intrest_rate_at_10_years, five_years_amount, ten_years_amount);
		cout << "The amount to invest is: " << amount_to_invest << endl;
		cout << "The actual interest rate for 5 years is: " << five_years_amount << endl;
		cout << "The actual interest rate for 10 years is: " << ten_years_amount << endl;

	}
	return 0;
}
