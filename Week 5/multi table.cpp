#include <iostream>
using namespace std;

int main()
{
	int m, n;
	cout << "Enter the horizontal axis: ";
	cin >> m;
	cout << "Enter the vertical axis: ";
	cin >> n;
	
	int table[m][n];

	//assigns each element
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			table[i][j] = i * j;
		}
	}
	//prints the table
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << table[i][j] << '\t';
		}
	}
	
	return 0;
}
