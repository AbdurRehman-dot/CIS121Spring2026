#include<iostream>
using namespace std;

void calculation(double weight, double zipcode,double&passportage, double&areacharge, double&weightcharge)
{
	if (zipcode == 60171)
	{
		areacharge = 2.00;
	}
	else if(zipcode == 60172)
	{
		areacharge = 2.50;
	}
	else if (zipcode == 60635)
	{
		areacharge == 3.00;
	}
	else
	{
		areacharge = 5.00;
	}
	if (weight > 100)
	{
		weightcharge = 0.02;
		weightcharge = weightcharge * weight;
	}
	else if (weight > 50)
	{
		weightcharge = 0.03;
		weightcharge = weightcharge * weight;
	}
	else
	{
		weightcharge = 0.05;
		weightcharge = weightcharge * weight;
	}
	passportage = weightcharge + areacharge;
	
}





int main()
{
	double weight, zipcode, passpostage, areacharge, weightcharge;
	cout << "Enter the weight and zipcode of the package: ";
	double numberofentries = 0;
	while (cin >> weight >> zipcode)
	{
		calculation(weight, zipcode, passpostage, areacharge, weightcharge);
		cout << "The area charge is: " << areacharge << endl;
		cout << "The weight charge is: " << weightcharge << endl;
		cout << "The total postage is: " << passpostage << endl;

		numberofentries++;
	}
	cout << "The number of entries is: " << numberofentries << endl;
	return 0;






}