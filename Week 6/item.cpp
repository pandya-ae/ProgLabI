#include <iostream>
using namespace std;

struct item
{
	string code;
	string name;
	int price;
	int amount;
};

item itemtype[50];

int main()
{
	int totalamount = 0;
	int totalprice = 0;
	int n;
	cout << "How many types of items: ";
	cin >> n;
	
	for ( int i = 0; i < n; i++)
	{
		cout << "Item code: ";
		cin >> itemtype[i].code;
		cout << "Item name: ";
		cin >> itemtype[i].name;
		cout << "Item price: ";
		cin >> itemtype[i].price;
		cout << "Item amount: ";
		cin >> itemtype[i].amount;
		totalamount += itemtype[i].amount;
		totalprice += (itemtype[i].amount) * (itemtype[i].price);
	}
	
	cout << "The total amount of items: " << totalamount << endl;
	cout << "The average priece of items: " << totalprice/totalamount << endl;
}
