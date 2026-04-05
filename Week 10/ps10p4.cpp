#include<iostream>
#include<iomanip>
using namespace std;

void calculations(double widget, double &costperwidget, double &extendedprice, double&salestax,double&totalorder)
{
	if (widget >= 10000)
	{
		costperwidget = 4.00;
		extendedprice = widget * costperwidget;
		salestax = extendedprice * 0.07;
		totalorder = extendedprice + salestax;

	}
	else if (widget >= 5000 && widget < 10000)
	{
		costperwidget = 5.00;
		extendedprice = widget * costperwidget;
		salestax = extendedprice * 0.07;
		totalorder = extendedprice + salestax;
	}
	else
	{
		costperwidget = 10.00;
		extendedprice = widget * costperwidget;
		salestax = extendedprice * 0.07;
		totalorder = extendedprice + salestax;
	}
}





int main()
{
	double widget, costperwidget ,extendedprice, salestax, totalorder;
	double sumoftotalorders = 0.0;
	cout << "Enter the number of widgets: ";
	while (cin >> widget)
	{
		calculations(widget, costperwidget, extendedprice, salestax,totalorder);
		cout << "Number of widgets: " << widget << endl;
		cout << "Cost per widget: $" << costperwidget << endl;
		cout << "Extended price: $" << extendedprice << endl;
		cout << "Sales tax: $" << salestax << endl;
		cout << "Total order: $" << totalorder << endl;
		cout << setprecision(2) << fixed;

		sumoftotalorders += totalorder;

	}
	cout << "Total number of orders: " << sumoftotalorders << endl;
	return 0;





}