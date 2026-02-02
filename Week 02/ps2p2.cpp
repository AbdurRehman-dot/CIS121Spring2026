#include<iostream> // Included to access library functions
#include<string>   // Included to use string data type
using namespace std;
int main() {
	string lname;
	cout << "Enter lname: ";
	cin >> lname;
	int hours;
	cout << "Enter number of hours worked: ";
	cin >> hours;
	float pay_rate;
	cout << "Enter pay rate: ";
	cin >> pay_rate;
	float gross = hours * pay_rate;
	cout << lname << " is owed " << gross << " dollars. " << endl;
	return 0;
}