#include <iostream>;
using namespace std;
int main()
{
	float price, quantity, value;

	cout << "Enter current stock price: ";
	cin >> price;
	cout << "Enter quantity of stock: ";
	cin >> quantity;

	value = quantity * price;

	cout << "The current value of your stock is: $" << value << endl;

	return 0;
}