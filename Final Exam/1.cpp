#include <iostream>
#include <math.h>
using namespace std;

int func (int n)
{
	if (n <= 0)
	{
		return pow(n,3) + 1;
	}
	if (n > 0 && n < 5)
	{
		return pow(n, 0.5) + 5;
	}
	if (n >= 5)
	{
		return n + func(n - 1);
	}
}

int main ()
{
	int n;
	cin >> n;
	cout << func(n) << endl;
}
