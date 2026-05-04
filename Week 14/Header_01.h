#pragma once
#include<iostream>
#include<string>
using namespace std;

class Member
{
public:
	void member_first_name(string first);
	string member_first_name();
	void member_last_name(string last);
	string member_last_name();
	void member_age(double age);
	double member_age();
	void membership_type(string type);
	string membership_type();
	double membership_cost();
private:
	string m_first, m_last;
	double m_member_age;
	string m_membership_type;
	double m_membership_cost;
};
void Member::member_first_name(string first)
{
		m_first = first;
	
}
string Member::member_first_name()
{
	return m_first;
}
void Member::member_last_name(string last)
{
	
	m_last = last;
	
}
string Member::member_last_name()
{
	return m_last;
}
void Member::member_age(double age)
{
		m_member_age = age;
	
}
double Member::member_age()
{
	return m_member_age;
}
void Member::membership_type(string type)
{
	if (type == "Silver")
	{
		m_membership_type = "Silver";
		m_membership_cost = 1000.00;
	}
	else if (type == "Gold")
	{
		m_membership_type = "Gold";
		m_membership_cost = 1200.00;
	}
	else if (type == "Bronze")
	{
		m_membership_type = "Bronze";
		m_membership_cost = 500.00;
	}
	else
	{
		cout << "Invalid membership type. Please enter 'S', 'G', or 'B'." << endl;
		m_membership_cost = 0.00;
	}
}
string Member::membership_type()
{
	return m_membership_type;
}
double Member::membership_cost()
{
	if (member_age() > 50)
	{
		m_membership_cost *= 0.9;
	}
	return m_membership_cost;
}