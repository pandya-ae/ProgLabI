#include <iostream>
using namespace std;

int is_ganjil (int x)
{
	if (x%2 != 0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

int main ()
{
	double x;
	cin >> x;
	cout << is_ganjil(x);
}
