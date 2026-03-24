#include<iostream>
#include<string>
using namespace std;

double pay(double hours , char job_code)
{
	double total = hours * job_code;
	return total;

}
int main()
{
	string lname;
	char job_code;
	double hours;
	cout << "Enter last name, Job code (L,J,A) and hours worked: ";
	double entries = 0;
	double sum = 0;
	double average_pay;
	while (cin >> lname >> job_code >> hours)
	{
		if (job_code == 'L' || job_code == 'l')
		{
			double total = pay(hours, 25);
			cout << "Total pay for " << lname << " is $ " << total << endl;
		}
		else if (job_code == 'J' || job_code == 'j')
		{
			double total = pay(hours, 50);
			cout << "Total pay for " << lname << " is $ " << total << endl;
		}
		else if (job_code == 'A' || job_code == 'a')
		{
			double total = pay(hours, 30);
			cout << "Total pay for " << lname << " is $ " << total << endl;
		}
		else
			cout << "Invalid job code" << endl;

		entries++;
		sum += pay(hours, job_code);

		

	}
	average_pay = sum / entries;
	cout << "Number of entries made " << entries << endl;
	cout << "Average pay is $ " << average_pay << endl;
}