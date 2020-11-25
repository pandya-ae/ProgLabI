#include <iostream>
using namespace std;

int main ()
{
	int n, num;
	
	cout << "Enter the maximum number: ";
	cin >> n;
	
	for ( num = 1; num < n; num++)
	{
		if ( (num % 2 == 0 or num % 7 == 0) and num % 5 != 0)
			cout << num << ", ";
	}
	return 0;
}
