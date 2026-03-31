#include <iostream>
using namespace std;
int main()
{
	float purchaseprice, currentprice, percentchange;

	cout << "Enter the purchase price of the stock: ";
	cin >> purchaseprice;
	cout << "Enter the current price of the stock: ";
	cin >> currentprice;

	percentchange = ((currentprice - purchaseprice) / purchaseprice) * 100;

	cout << "The stock has changed by: %" << percentchange << endl;

	return 0;
}