#include<iostream>
#include<string>
using namespace std;

int getlabfee(string department, string course_code)
{
	if (department == "CIS" && course_code == "101")
	{
		int lab_fee = 50;
		return lab_fee;
	}
	else if (department == "CIS" && course_code == "121")
	{
		int lab_fee = 100;
		return lab_fee;
	}
	else if (department == "MAT" && course_code == "111")
	{
		int lab_fee = 25;
		return lab_fee;
	}
	else if (department == "MAT" && course_code == "112")
	{
		int lab_fee = 35;
		return lab_fee;
	}
	else if (department == "ENG" && course_code == "100")
	{
		int lab_fee = 55;
		return lab_fee;
	}
	else
	{
		int lab_fee = 50;
		return lab_fee;
	}
}


int main()
{
	string department, course_code;
	cout << "Enter your depratment name and course code (101, 121, 111, 112, 100) ";
	int average_lab_fee = 0;
	int total = 0;
	int entries = 0;
	while (cin >> department >> course_code)
	{
		int lab_fee = getlabfee(department, course_code);
		cout << "The department is " << department << " and the course code is " << course_code << " and the lab fee is " << lab_fee << endl;

		total += lab_fee;
		entries++;
	}
	average_lab_fee = total / entries;
	cout << "The average lab fee is " << average_lab_fee << endl;
	cout << "The total is " << total << endl;
	cout << "The total number of entries are  " << entries << endl;
	return 0;
}
