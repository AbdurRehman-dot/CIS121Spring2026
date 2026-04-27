#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
void array_type(string make[], string model[], int n)
{
	int i;
	i = n;
	for (i = 0; i < n; i++)
		cout << make[i] << model[i] << endl;
}
int main()
{
	int n;
	cout << "How many cars do you want to enter? ";
	cin >> n;
	string* make = new string[n];
	string* model = new string[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Enter make of car " << i + 1 << ": ";
		cin >> make[i];
		cout << "Enter model of car " << i + 1 << ": ";
		cin >> model[i];
	}
	cout << "\nHere is the list of cars you entered:\n";
	array_type(make, model, n);
	return 0;
}