#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
	int n, i, j;
	
	cout << "Enter an integer: ";
	cin >> n;
	
	int multiply[n][n];
	
	for ( i = 0; i < n; i++ )
	{
		for ( j = 0; j < n; j++ )
		{
			multiply[i][j] = (i+1)*(j+1);
			cout << setw(5) << multiply[i][j];
		}
		cout << endl;
	}
	return 0;
}
