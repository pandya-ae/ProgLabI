#include <iostream>
using namespace std;

int main ()
{
	int n, m;
	cout << "Enter the starting number: ";
	cin >> n;
	cout << "Enter the amount of terms: ";
	cin >> m;
	
	int grade[m];
	
	for ( int i = 0; i < m; i++ )
	{
		grade[i] = (i+n)*(i+n);
		cout << grade[i] << " ";
	}
	
	return 0;
}
