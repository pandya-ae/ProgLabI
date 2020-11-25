#include <iostream>
using namespace std;

void star (int n)
{
	if (n == 1)
	{
		cout << "* " << endl;
	}
	else
	{
		star (n-1);
		for (int i = 1; i <= n; i++)
		{
			cout << "* ";
		}
		cout << endl;
		star (n-1);
	}
}

int main ()
{
	int n;
	cin >> n;
	star(n);
}
