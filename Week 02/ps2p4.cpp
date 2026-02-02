#include<iostream> // Included to access library
#include<string> // Included to access string functions
using namespace std;
int main(){
	string lname;
	cout << "Enter lname; ";
	cin >> lname ;
	int credit_hours;
	cout << "Enter credit hours; ";
	cin >> credit_hours;
	int Total_tuition = (credit_hours * 250 + 100);
	cout << lname << " has a tution fee of " << Total_tuition << endl;
	return 0;





}