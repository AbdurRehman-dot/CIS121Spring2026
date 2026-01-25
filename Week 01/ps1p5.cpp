#include<iostream>
using namespace std;
int main()
{
	int n1, n2;
	cout << "Enter n1 and n2; ";
	cin >> n1 >> n2;
	int sum = n1 + n2 ;
	int diff = n1 - n2 ;
	int prod = n1 * n2 ;
	cout << "The sum, product and difference of " << n1 << " and " << n2 << " is " <<  sum  << ", " <<  prod << ", " << diff << endl;
	return 0;
}