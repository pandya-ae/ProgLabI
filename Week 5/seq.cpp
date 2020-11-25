#include <iostream>
using namespace std;

int main ()
{
	int n;
	cout << "Enter the amount of array: ";
	cin >> n;
	cout << endl;
	
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
		cout << " is: " << grade[i];
		cout << endl;
	}
	
	return 0;
}
