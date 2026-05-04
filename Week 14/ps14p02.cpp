#include<iostream>
#include<string>
#include "Header_02.h"
using namespace std;
int main()
{
	string make_name, model, cpu, ram, hdd, type;
	double cost;
	double total_cost = 0.00;
	C_Asset computer;
	cout << "Enter computer make_name, model, cpu, ram, hdd, type: ";
	while (cin >> make_name >> model >> cpu >> ram >> hdd >> type)
	{
		computer.computer_make_name(make_name);
		computer.computer_model(model);
		computer.computer_cpu(cpu);
		computer.computer_ram(ram);
		computer.computer_hdd(hdd);
		computer.computer_type(type);
		cost = computer.computer_cost();
		cout << "Computer make name: " << computer.computer_make_name() << endl;
		cout << "Computer model: " << computer.computer_model() << endl;
		cout << "Computer CPU: " << computer.computer_cpu() << endl;
		cout << "Computer RAM: " << computer.computer_ram() << endl;
		cout << "Computer HDD: " << computer.computer_hdd() << endl;
		cout << "Computer type: " << computer.computer_type() << endl;
		cout << "Computer cost: $" << computer.computer_cost() << endl;
		total_cost = cost;
		cout << "Total cost: $" << total_cost << endl;
		cout << "\nEnter computer make_name, model, cpu, ram, hdd, type: ";
	}
	system("pause");
	return 0;




}