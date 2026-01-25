#include<iostream> // comment library
#include <string> 
using namespace std;
int main()
{
	string lname;
	int score;
	cout << "Enter your lname and score: ";
	cin >> lname >> score;
	cout << lname << " has a score of " << score << endl;
	return 0;
}