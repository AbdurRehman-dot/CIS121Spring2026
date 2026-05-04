#pragma once
#include<iostream>
#include<string>
using namespace std;
class C_Asset
{
public:
	void computer_make_name(string name);
	string computer_make_name();
	void computer_model(string model);
	string computer_model();
	void computer_cpu(string cpu);
	string computer_cpu();
	void computer_ram(string ram);
	string computer_ram();
	void computer_hdd(string hdd);
	string computer_hdd();
	void computer_type(string type);
	string computer_type();
	double computer_cost();
private:
	string m_name;
	string m_model;
	string m_cpu;
	string m_ram;
	string m_hdd;
	string m_type;
	double m_cost;
};
void C_Asset::computer_make_name(string name)
{
	if (name == "HP")
	{
		m_name = "HP";
	}
	else if (name == "Apple")
	{
		m_name = "Apple";
	}
	else if (name == "Lenovo")
	{
		m_name = "Lenovo";
	}
	else
	{
		cout << "Invalid computer make name." << endl;
	}
}
string C_Asset::computer_make_name()
{
	return m_name;
}
void C_Asset::computer_model(string model)
{
	m_model = model;
}
string C_Asset::computer_model()
{
	return m_model;
}
void C_Asset::computer_cpu(string cpu)
{
	if (cpu == "AMD")
	{
		m_cpu = "AMD";
	}
	else if (cpu == "Intel")
	{
		m_cpu = "Intel";
	}
	else
	{
		cout << "Invalid computer CPU." << endl;
	}
}
string C_Asset::computer_cpu()
{
	return m_cpu;
}
void C_Asset::computer_ram(string ram)
{
	if (ram == "8GB")
	{
		m_ram = "8GB";
	}
	else if (ram == "16GB")
	{
		m_ram = "16GB";
	}
	else if (ram == "32GB")
	{
		m_ram = "32GB";
	}
	else
	{
		cout << "Invalid computer RAM." << endl;
	}
}
string C_Asset::computer_ram()
{
	return m_ram;
}
void C_Asset::computer_hdd(string hdd)
{
	if (hdd == "HDD")
	{
		m_hdd = "HDD";
	}
	else if (hdd == "SSD")
	{
		m_hdd = "SSD";
	}
	else
	{
		cout << "Invalid computer HDD." << endl;
	}
}
string C_Asset::computer_hdd()
{
	return m_hdd;
}
void C_Asset::computer_type(string type)
{
	if (type == "Desktop")
	{
		m_type = "Desktop";
	}
	else if (type == "Laptop")
	{
		m_type = "Laptop";
	}
	else if (type == "Notebook")
	{
		m_type = "Notebook";
	}
	else if (type == "Tablet")
	{
		m_type = "Tablet";
	}
	else
	{
		cout << "Invalid computer type." << endl;
	}
}
string C_Asset::computer_type()
{
	return m_type;
}
double C_Asset::computer_cost()
{
	double total = 0.00;
	if (m_name == "Lenovo")
	{
		total += 1200.00;
	}
	else if (m_name == "HP")
	{
		total += 1000.00;
	}
	else if (m_name == "Apple")
	{
		total += 2000.00;
	}
	if (m_cpu == "Intel")
	{
		total += 200.00;
	}
	if (m_ram == "16GB")
	{
		total += 300.00;
	}
	else if (m_ram == "32GB")
	{
		total += 500.00;
	}
	if (m_hdd == "SSD")
	{
		total += 500.00;
	}
	 if (m_type == "Laptop")
	{
		total += 300.00;
	}
	else if (m_type == "Tablet")
	{
		total -= 200.00;
	}
	m_cost = total;
	return m_cost;
}