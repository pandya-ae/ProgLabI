#include <iostream>
using namespace std;

int main ()
{
	int l, n, m, o;
	
	cout << "Algorithm to fit people into taxi." << endl;
	cout << " " << endl;
	cout << "Enter the amount of single(s): ";
	cin >> l;
	cout << "Enter the amount of couple(s): ";
	cin >> n;
	cout << "Enter the amount of family of 3: ";
	cin >> m;
	cout << "Enter the amount of family of 4: ";
	cin >> o;
	
	int t = 0;
	
	t += o;
	
	while ( m > 0 ) 
	{
		m -= 1;
		if ( l > 0 )
		{
			l -= 1;
		}
		t++;
	}
	
	
	while ( n > 0 )
	{
		if ( n >= 2 )
		{
			n -= 2;
		}
		else if ( l >= 2 )
		{
			n -= 1;
			l -= 2;
		}
		else
		{
			n -= 1;
			l -= 1;
		 } 
		 t++;
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
		t++;
	}
	
	cout << endl;
	cout << "The amount of taxi needed: " << t << " taxi(s)." << endl;
}
