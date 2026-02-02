#include<iostream> // Included to access library
using namespace std;
int main() {
	int length;
	int width;
	cout << "Enter the length and width of the rectangle: ";
	cin >> length >> width;
	int area = length * width;
	int	circumference = 2 * (length + width);
	cout << "The area of the rectangle is: " << area
		<< " and the circumference is: " << circumference << endl;
	return 0;
}