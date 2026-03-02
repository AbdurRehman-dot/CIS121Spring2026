#include<iostream>
using namespace std;

int main()
{
    int part_number;
    int quantity;
    float cost_per_unit;
    float total_cost;

    cout << "Enter part number (10, 99, 55, 70, 50): ";
    cin >> part_number;

    cout << "Enter quantity: ";
    cin >> quantity;

    if (part_number == 10 && quantity > 1000)
    {
        cost_per_unit = 1.00;
    }
    else if (part_number == 99 && quantity > 500)
    {
        cost_per_unit = 2.00;
    }
    else if (part_number == 55 || part_number == 70 || part_number == 50)
    {
        cost_per_unit = 5.00;
    }
    else
    {
        cout << "Invalid part number.\n";
        return 0;
    }

    total_cost = quantity * cost_per_unit;

    cout << "Part Number: " << part_number << endl;
    cout << "Cost per Unit: " << cost_per_unit << endl;
    cout << "Total Cost: " << total_cost << endl;

    return 0;
}