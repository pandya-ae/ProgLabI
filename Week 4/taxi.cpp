#include <iostream>
using namespace std;

int main ()
{
	int l, m, n, o;
	int taxi = 0;
	
	cout << "Enter the amount of single(s): ";
	cin >> l;
	cout << "Enter the amount of couple(s): ";
	cin >> m;
	cout << "Enter the amount of family of 3: ";
	cin >> n;
	cout << "Enter the amount of family of 4: ";
	cin >> o;
	
	taxi += 0;
	
	while ( n > 0 ) 
	{
		if ( l > 0 )
		{
			l -= 1;
		}
		taxi ++;
	}
	
	
	while ( m > 0 )
	{
		if ( m >= 2 )
		{
			m -= 2;
		}
		else if ( l >= 2 )
		{
			m -= 1;
			l -= 2;
		}
		else
		{
			m -= 1;
			l -= 1;
		 } 
		 taxi++;
	}
	
	while ( l > 0 )
	{
		if ( l >=4 )
		{
			l -= 4;
		}
		else
		{
			l -= 1;
		}
		taxi++;
	}
	
	cout << "The amount of taxi needed is: " << taxi << " taxis." << endl;
}
