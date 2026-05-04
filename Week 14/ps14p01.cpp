#include<iostream>
#include <string>
#include "Header_01.h"
using namespace std;
int main()
{
	string first, last;
	double age;
	string type;
	double cost;
	Member members;
	cout << "Enter member's first and last name, age and memebership type: ";
	while (cin >> first >> last >> age >> type)
	{

		members.member_first_name(first);
		members.member_last_name(last);
		members.member_age(age);
		members.membership_type(type);

		if (members.member_first_name() == "")
		{
			cout << "Not Entered" << endl;
		}
		else
		{
			members.member_first_name(first);
		}
		if (members.member_last_name() == "")
		{
			cout << "Not Entered" << endl;
		}
		else
		{
			members.member_last_name(last);
		}
		if (members.member_age() == 0)
		{
			cout << " 18 " << endl;
		}
		else
		{
			members.member_age(age);
		}

		cout << members.member_first_name() << endl;
		cout << members.member_last_name() << endl;
		cout << members.member_age() << endl;
		cout << members.membership_type() << endl;
		cout << members.membership_cost() << endl;
	}
	system("pause");
	return 0;







}