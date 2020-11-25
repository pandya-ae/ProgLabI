#include <iostream>
using namespace std;

int main ()
{
	int n;
	cin >> n;
	
	int grade[n];
	// grade [0]
	// grade [9]
	
	for ( int i = 0; i < n; i++ )
	{
		cout << "Input the value of " << i << ": ";
		cin >> grade[i];
	}
	
	for ( int i = 0; i < n; i++ )
	{
		cout << "Output for value of " << i;
		cout << "is: " << grade[i];
		cout << endl;
	}
	
	return 0;
}
