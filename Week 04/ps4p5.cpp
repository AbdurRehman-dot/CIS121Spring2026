#include<iostream>
#include<string>
using namespace std;

int main()
{
    string name;
    cout << "Enter your name: ";
    cin >> name;

    int dependents;
    cout << "Enter the number of dependents: ";
    cin >> dependents;

    float gross_income;
    cout << "Enter your gross income: ";
    cin >> gross_income;

    float adjusted_gross_income = gross_income - (dependents * 12000);

    float tax_rate;
    float income_tax;

    if (adjusted_gross_income > 50000)
    {
        tax_rate = 0.20;   // 20%
    }
    else
    {
        tax_rate = 0.10;   // 10%
    }

    income_tax = adjusted_gross_income * tax_rate;

    if (income_tax < 0)
    {
        income_tax = 100;
    }

    cout << name << " has an income of " << gross_income << " with a number of " << dependents << " dependents. The adjusted gross income is " << adjusted_gross_income << " with a tax of " << income_tax << endl;
    return 0;
}
