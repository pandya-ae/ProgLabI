#include <iostream>
using namespace std;

int fungsi1 (int x, int y) // pass by value
{
	x++;
	y++;
	int z = x*y;
	return z;
}
int fungsi2 (int &x, int &y) // pass by reference
{
	x++;
	y++;
	int z = x*y;
}

main ()
{
	int a, b;
	cin >> a >> b;
	int c;
	c = fungsi1 (a, b);
	cout << endl;
	cout << a << endl;
	cout << b << endl;
	cout << c;
}
