#include<iostream>
using namespace std;

int main ()
{
	int purchase;
	cout << "Input your purchasement total: ";
	cin >> purchase;
	
	if (purchase <= 50000){
		cout << "You get no discount" << endl;
		cout << purchase << endl;	
	}
	else if (purchase > 50000 and purchase <= 100000){
		cout << "You get a 10% discount" << endl;
		cout << purchase - purchase * 0.1;
	}
	else if (purchase > 100000 and purchase <= 200000){
		cout << "You get a 20% discount" << endl;
		cout << purchase - purchase * 0.2;
	}
	else{
		cout << "You get a 75000 cashback" << endl;
		cout << purchase - 75000;
	}
	return 0; 
}
