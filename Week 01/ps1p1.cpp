#include<iostream> // comment library
#include <string> // comment library
using namespace std;
int main()
{
	string fname;
	string lname;
	cout << "Enter your fname and lname: ";
	cin >> fname >> lname;
	cout << "Hello " << lname << "." << endl;
	return 0;
}