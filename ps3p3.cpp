#include <iostream>
using namespace std;
int main()
{
	float mealtotal, tip, Total;

	cout << "Enter the total for the meal: ";
	cin >> mealtotal;

	tip = mealtotal * 0.15;
	Total = mealtotal + tip;

	cout << "Meal total: $" << mealtotal << endl;
	cout << "Tip (15%): $" << tip << endl;
	cout << "Total with tip : $" << Total << endl;

	return 0;
}