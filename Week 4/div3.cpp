#include <iostream>
using namespace std;

int main ()
{
	int n, num;
	
	cout << "Enter the maximum number: ";
	cin >> n;
	
	for ( num = 1; num < n; num++ )
	{
		if ( num % 3 == 0 )
			cout << num << ", ";
	}
	return 0;
}
