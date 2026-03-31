#include <iostream>
using namespace std;
int main()
{
	float cost, unitprice, unitcost, breakeven;

	cout << "Enter fixed costs: ";
	cin >> cost;
	cout << "Enter price per unit: ";
	cin >> unitprice;
	cout << "Enter cost per unit: ";
	cin >> unitcost;

	breakeven = cost / (unitprice - unitcost);

	cout << "Break even point (units to sell) is: " << breakeven << endl;

	return 0;
}